cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(ARBITER VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Nsight Tegra Visual Studio Edition takes care of
# prefixing library names with '-l'.
if(CMAKE_VS_PLATFORM_NAME STREQUAL "Tegra-Android")
	set(CMAKE_LINK_LIBRARY_FLAG "")
endif()

# Use relative paths
if(WIN32)
  set(CMAKE_USE_RELATIVE_PATHS true)
  set(CMAKE_SUPPRESS_REGENERATION true)
endif()

if (APPLE AND NOT ANDROID)
  SET(CMAKE_SIZEOF_VOID_P 4)
  set(CMAKE_XCODE_ATTRIBUTE_GCC_VERSION "com.apple.compilers.llvm.clang.1_0")
  set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD "c++17")
  set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")

  if(POLICY CMP0068)
    cmake_policy(SET CMP0068 NEW)  # CMake 3.9+: `RPATH` settings on macOS do not affect `install_name`.
  endif()

  if (NOT CMAKE_OSX_ARCHITECTURES)
    set(CMAKE_OSX_ARCHITECTURES "x86_64" CACHE STRING "") # target the common case
  endif()

  # otherwise apple defines a macro named check that conflicts with boost
  add_definitions(-D__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES=0)
endif ()

set(CMAKE_MODULE_PATH
  "${PROJECT_SOURCE_DIR}/CMake"
  "${PROJECT_SOURCE_DIR}/CMake/Packages"
)

#####################################################################
# Build Environment
#####################################################################

if (NOT CMAKE_BUILD_TYPE)
  # CMake defaults to leaving CMAKE_BUILD_TYPE empty. This screws up
  # differentiation between debug and release builds.
  set(CMAKE_BUILD_TYPE "RelWithDebInfo" CACHE STRING "Choose the type of build, options are: None (CMAKE_CXX_FLAGS or CMAKE_C_FLAGS used) Debug Release RelWithDebInfo MinSizeRel." FORCE)
endif ()

message(STATUS "Arbiter Version : ${ARBITER_VERSION}")

# CMake in-built code
include(CheckTypeSize)
CHECK_TYPE_SIZE("void*" ARBITER_PTR_SIZE BUILTIN_TYPES_ONLY)
if (ARBITER_PTR_SIZE EQUAL 8)
  set(ARBITER_PLATFORM_X64 TRUE)
else ()
  set(ARBITER_PLATFORM_X64 FALSE)
endif ()

if (WIN32)
  # Create debug libraries with _d postfix
  set(CMAKE_DEBUG_POSTFIX "_d")
endif ()

# Set compiler specific build flags
if (NOT ANDROID AND NOT EMSCRIPTEN AND UNIX OR MINGW)
  include(CheckCXXCompilerFlag)
  check_cxx_compiler_flag(-msse ARBITER_GCC_HAS_SSE)
  if (ARBITER_GCC_HAS_SSE)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -msse")
  endif ()
endif()

if(UNIX)
  # This is a set of sensible warnings that provide meaningful output
  set(ARBITER_WARNING_FLAGS "-Wall -Winit-self -Wcast-qual -Wwrite-strings -Wextra -Wundef -Wmissing-declarations -Wno-unused-parameter -Wshadow -Wno-missing-field-initializers -Wno-long-long")
  if (EMSCRIPTEN)
      set(ARBITER_WARNING_FLAGS "${ARBITER_WARNING_FLAGS} -Wno-warn-absolute-paths")
  endif ()
  if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set(ARBITER_WARNING_FLAGS "${ARBITER_WARNING_FLAGS} -Wno-inconsistent-missing-override")
  endif()
  set(CMAKE_CXX_FLAGS "${ARBITER_WARNING_FLAGS} ${CMAKE_CXX_FLAGS}")
endif ()
if (MSVC)
  add_definitions(-D_MT -D_USRDLL)
  # MSVC does not like Arbiter::Singleton (header pragma is enough for MSVC2015+ though)
  add_definitions(/wd4661)
  if (CMAKE_BUILD_TOOL STREQUAL "nmake")
    # set variable to state that we are using nmake makefiles
	set(NMAKE TRUE)
  endif ()
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /fp:fast")
  # Enable intrinsics on MSVC in debug mode
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /Oi")
  if (CMAKE_CL_64)
    # Visual Studio bails out on debug builds in 64bit mode unless
	# this flag is set...
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /bigobj")
	set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} /bigobj")
  endif ()

  if (ARBITER_PROJECT_FOLDERS)
    # Turn on the ability to create folders to organize projects (.vcproj)
    # It creates "CMakePredefinedTargets" folder by default and adds CMake
    # defined projects like INSTALL.vcproj and ZERO_CHECK.vcproj
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)
  endif()

  if (MSVC_VERSION GREATER 1500 OR MSVC_VERSION EQUAL 1500)
    option(ARBITER_BUILD_MSVC_MP "Enable build with multiple processes in Visual Studio" TRUE)
  else()
    set(ARBITER_BUILD_MSVC_MP FALSE CACHE BOOL "Compiler option /MP requires at least Visual Studio 2008 (VS9) or newer" FORCE)
  endif()
  if(ARBITER_BUILD_MSVC_MP)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MP")
  endif ()
  if(MSVC_VERSION GREATER 1400 OR MSVC_VERSION EQUAL 1400)
    option(ARBITER_BUILD_MSVC_ZM "Add /Zm256 compiler option to Visual Studio to fix PCH errors" TRUE)
  else()
    set(ARBITER_BUILD_MSVC_ZM FALSE CACHE BOOL "Compiler option /Zm256 requires at least Visual Studio 2005 (VS8) or newer" FORCE)
  endif()
  if(ARBITER_BUILD_MSVC_ZM)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Zm256")
  endif ()
endif ()
if (MINGW)
  add_definitions(-D_WIN32_WINNT=0x0501)
  if( CMAKE_SIZEOF_VOID_P EQUAL 4 )
    # set architecture to i686, since otherwise some versions of MinGW can't link
    # the atomic primitives
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -march=i686")
  endif ()
  # disable this optimisation because it breaks release builds (reason unknown)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-tree-slp-vectorize")
  # Ignore some really annoying warnings which also happen in dependencies
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-error=cast-qual -Wno-unused-local-typedefs")
endif ()

# determine system endianess
if (MSVC OR ANDROID OR EMSCRIPTEN OR APPLE_IOS)
  # This doesn't work on VS 2010
  # MSVC only builds for intel anyway
  # all IOS devices are little endian
  set(ARBITER_TEST_BIG_ENDIAN FALSE)
else()
  include(TestBigEndian)
  test_big_endian(ARBITER_TEST_BIG_ENDIAN)
endif()

# Specify build paths
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
if (WIN32 OR APPLE)
  if (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    # We don't want to install in default system location, install is really for the SDK, so call it that
    set(CMAKE_INSTALL_PREFIX
	  "${PROJECT_BINARY_DIR}/sdk" CACHE PATH "ARBITER install prefix" FORCE
    )
  endif (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
endif(WIN32 OR APPLE)

# Set up iOS overrides.
if (APPLE_IOS)
  set(CMAKE_EXE_LINKER_FLAGS "-framework OpenGLES -framework Foundation -framework CoreGraphics -framework QuartzCore -framework UIKit")
  set(XCODE_ATTRIBUTE_GCC_UNROLL_LOOPS "YES")
  set(XCODE_ATTRIBUTE_LLVM_VECTORIZE_LOOPS "YES")
  set(XCODE_ATTRIBUTE_CODE_SIGN_IDENTITY "iPhone Developer")
  set(XCODE_ATTRIBUTE_GCC_PRECOMPILE_PREFIX_HEADER "YES")
  set(ARBITER_BUILD_RENDERSYSTEM_GLES2 TRUE CACHE BOOL "Forcing OpenGL ES 2 RenderSystem for iOS" FORCE)
  set(ARBITER_STATIC TRUE CACHE BOOL "Forcing static build for iOS" FORCE)
  set(MACOSX_BUNDLE_GUI_IDENTIFIER "com.yourcompany.\${PRODUCT_NAME:rfc1034identifier}")
elseif (ANDROID)
  set(TargetPlatform "Android")
  set(ARBITER_PLATFORM ARBITER_PLATFORM_ANDROID)
  set(ARBITER_CONFIG_ENABLE_VIEWPORT_ORIENTATIONMODE FALSE CACHE BOOL "Disable viewport orientation Android" FORCE)
  option(ARBITER_BUILD_ANDROID_JNI_SAMPLE "Enable JNI Sample" FALSE)

  set(ARBITER_BUILD_RENDERSYSTEM_GLES2 TRUE CACHE BOOL "Forcing OpenGL ES 2 RenderSystem for Android" FORCE)

  set(ARBITER_BUILD_PLUGIN_PCZ FALSE CACHE BOOL "Disable pcz on Android" FORCE)
  set(ARBITER_BUILD_PLUGIN_BSP FALSE CACHE BOOL "Disable bsp scenemanager on Android" FORCE)
  set(ARBITER_BUILD_TOOLS FALSE CACHE BOOL "Disable tools on Android" FORCE)
  set(ARBITER_STATIC TRUE CACHE BOOL "Forcing static build for Android" FORCE)

  # workaround for the legacy android toolchain
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(EMSCRIPTEN)
  add_definitions(-DEMSCRIPTEN=1 -D__EMSCRIPTEN__=1)
  set(TargetPlatform "Emscripten")
  set(ARBITER_PLATFORM ARBITER_PLATFORM_EMSCRIPTEN)

  set(ARBITER_BUILD_RENDERSYSTEM_GLES2 TRUE CACHE BOOL "Forcing OpenGL ES 2 RenderSystem for Emscripten" FORCE)
  set(ARBITER_BUILD_RENDERSYSTEM_GL FALSE CACHE BOOL "Disable OpenGL RenderSystem for Emscripten" FORCE)

  set(ARBITER_BUILD_PLUGIN_STBI TRUE CACHE BOOL "Enable STBIImageCodec on Emscripten (Smaller Footprint)" FORCE)
  set(ARBITER_BUILD_PLUGIN_FREEIMAGE FALSE CACHE BOOL "Disable Freeimage on Emscripten (Smaller Footprint)" FORCE)
  set(ARBITER_BUILD_PLUGIN_PCZ FALSE CACHE BOOL "Disable pcz on Emscripten" FORCE)
  set(ARBITER_BUILD_PLUGIN_BSP FALSE CACHE BOOL "Disable pcz on Emscripten" FORCE)
  set(ARBITER_BUILD_TOOLS FALSE CACHE BOOL "Disable tools on Emscripten" FORCE)
  set(ARBITER_BUILD_TESTS FALSE CACHE BOOL "Disable tests on Emscripten" FORCE)
  set(ARBITER_BUILD_COMPONENT_VOLUME FALSE CACHE BOOL "Disable volume component on Emscripten" FORCE)
  set(ARBITER_BUILD_COMPONENT_PAGING FALSE CACHE BOOL "Disable paging component on Emscripten" FORCE)
  set(ARBITER_BUILD_COMPONENT_TERRAIN FALSE CACHE BOOL "Disable terrain component on Emscripten" FORCE)
  set(ARBITER_STATIC TRUE CACHE BOOL "Forcing static build for Emscripten" FORCE)

  set(ARBITER_CONFIG_THREADS "0" CACHE STRING "Threading is unstable on Emscripten" FORCE)
elseif (APPLE AND NOT APPLE_IOS)

  set(XCODE_ATTRIBUTE_SDKROOT macosx)
  if(CMAKE_GENERATOR STREQUAL "Unix Makefiles")
    execute_process(COMMAND xcodebuild -version -sdk "${XCODE_ATTRIBUTE_SDKROOT}" Path | head -n 1 OUTPUT_VARIABLE CMAKE_OSX_SYSROOT)
    string(REGEX REPLACE "(\r?\n)+$" "" CMAKE_OSX_SYSROOT "${CMAKE_OSX_SYSROOT}")
  else()
    set(CMAKE_OSX_SYSROOT macosx)
  endif()

  # Make sure that the OpenGL render system is selected for non-iOS Apple builds
  set(ARBITER_BUILD_RENDERSYSTEM_GLES2 FALSE)
endif ()

find_package(SDL2 REQUIRED)
