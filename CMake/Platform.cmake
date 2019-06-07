# Create defines based on platform
if (CMAKE_SYSTEM_NAME MATCHES "Windows") 
	set(TARGET_PLATFORM_WINDOWS 1) 
	set(TARGET_PLATFORM "windows")
elseif (CMAKE_SYSTEM_NAME MATCHES "Linux")
	set(TARGET_PLATFORM_LINUX 1)
	set(TARGET_PLATFORM "linux")
elseif (CMAKE_SYSTEM_NAME MATCHES "Xbone")
	set(TARGET_PLATFORM_XBONE 1)
	set(TARGET_PLATFORM "mac")
else()
	set(TARGET_PLATFORM "unknown")
	message(WARNING "[!] Unhandled Compiler")
endif ()


# Determine target architecture
if ((CMAKE_SYSTEM_PROCESSOR MATCHES "AMD64" OR CMAKE_SYSTEM_PROCESSOR MATCHES "x86") AND CMAKE_SIZEOF_VOID_P EQUAL 8)
	set(TARGET_ARCH_x64 1)
	set(TARGET_ARCH_NAME "x64")
elseif (CMAKE_SYSTEM_PROCESSOR MATCHES "AMD64" AND CMAKE_SIZEOF_VOID_P EQUAL 4)
	set(TARGET_ARCH_x86 1)
	set(TARGET_ARCH_NAME "x86")
endif()


# Determine compiler
if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
	set(TARGET_COMPILER_MSVC 1)
elseif (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	set(TARGET_COMPILER_CLANG 1)
elseif (CMAKE_CXX_COMPILER_ID MATCHES "GNU")
	set(TARGET_COMPILER_GCC 1)
endif()