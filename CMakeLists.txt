#
#  Install:
#   Boost: system, filesystem
#
cmake_minimum_required(VERSION 3.08)

project (CppUnitTestFrameworkWrapper)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# so that the dynamic test libs can be created
set(CMAKE_CXX_FLAGS "-fPIC -fvisibility=hidden -fvisibility-inlines-hidden")

#Comment out for debugging compile problems
#set(CMAKE_VERBOSE_MAKEFILE ON)


include_directories(${PROJECT_SOURCE_DIR}/include)

if(NOT DEFINED CMAKE_LIBRARY_OUTPUT_DIRECTORY)
    set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib/)
endif()
if(NOT DEFINED CMAKE_RUNTIME_OUTPUT_DIRECTORY)
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/)
endif()

find_package(Boost 1.67 REQUIRED COMPONENTS system filesystem)
find_package(PkgConfig REQUIRED)
pkg_check_modules(UUID REQUIRED uuid)

add_subdirectory (testhostlib)
add_subdirectory (testhost)
add_subdirectory (test)
