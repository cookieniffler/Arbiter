function(arbiter_init)
    unset(arbiter_sources CACHE)
    unset(arbiter_libraries CACHE)
    unset(arbiter_definitions CACHE)
    unset(arbiter_build_type CACHE)
    unset(arbiter_graphics_api CACHE)

    set(arbiter_build_type DEBUG CACHE INTERNAL "")

    if(CMAKE_CONFIGURATION_TYPES)
        # Multi-config
        foreach(config ${CMAKE_CONFIGURATION_TYPES})
            if(config STREQUAL "Release")
                set(arbiter_build_type RELEASE)
            endif()
        endforeach()
    else()
        if (CMAKE_BUILD_TYPE STREQUAL "Release")
            set(arbiter_build_type RELEASE)
        endif ()
    endif()

    arbiter_add_definitions(-DSKY_${arbiter_build_type})
endfunction()

# Adds source files to the projects global list
function(arbiter_add_sources)
    set(srcs)
    foreach(s IN LISTS ARGN)
        if (NOT IS_ABSOLUTE "${s}")
            get_filename_component(s "${s}" ABSOLUTE)
        endif ()
        list(APPEND srcs "${s}")
    endforeach()

    set(arbiter_sources ${arbiter_sources} "${srcs}" CACHE INTERNAL "")
endfunction()

# Adds all sources gathered in child directories to a library target
function(arbiter_add_library lib_name lib_type)
    if (${CMAKE_GENERATOR} STREQUAL "Xcode")
        file(GLOB_RECURSE headers ${CMAKE_CURRENT_SOURCE_DIR}/*.h
                ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
                ${CMAKE_CURRENT_SOURCE_DIR}/*.inl)
    endif ()

    add_library(${lib_name} ${lib_type} "${arbiter_sources}" "${headers}")
    target_include_directories(${lib_name} PUBLIC ${PROJECT_SOURCE_DIR}/Source)
    target_include_directories(${lib_name} PUBLIC ${PROJECT_SOURCE_DIR}/Deps)
    set(${lib_name}_sources "${arbiter_sources}" CACHE INTERNAL "")

    set(arbiter_libraries ${arbiter_libraries} ${lib_name} CACHE INTERNAL "")
    arbiter_include_all_definitions()
    unset(arbiter_sources CACHE)

#    arbiter_configure_platform(compile_flags)
#    target_compile_options(${lib_name} PRIVATE "${compile_flags}")
endfunction()

# Creates a new list of sources to attach to a specific arbiter module - doesn't necessarily have
# to be associated with a library - could be a component etc.
function(arbiter_new_module module_name)
    set(${module_name}_sources "${arbiter_sources}" CACHE INTERNAL "")
    unset(arbiter_sources CACHE)
endfunction()

# Adds definitions to the global definitions list for the project
function(arbiter_add_definitions)
    foreach (def IN LISTS ARGN)
        add_definitions(${def})
        set(arbiter_definitions ${arbiter_definitions} "${def}" CACHE INTERNAL "")
    endforeach ()
endfunction()

# Includes all previously added definitions to the entire project
function(arbiter_include_all_definitions)
    foreach(def IN LISTS arbiter_definitions)
        add_definitions("${def}")
    endforeach()
endfunction()