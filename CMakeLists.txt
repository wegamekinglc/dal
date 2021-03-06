cmake_minimum_required(VERSION 3.12.0)

project(dal VERSION 1.0.0)

include(${CMAKE_CURRENT_LIST_DIR}/cmake/dal.cmake)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

message("-- Build Mode: ${CMAKE_BUILD_TYPE}")

if(MSVC)
    INCLUDE_DIRECTORIES($ENV{GTEST_ROOT}/include)

    set(MSVC_RUNTIME "dynamic" CACHE STRING "MSVC runtime to link")
    set_property(CACHE MSVC_RUNTIME PROPERTY STRINGS static dynamic)

    if ("${MSVC_RUNTIME}" STREQUAL "static")
        link_directories($ENV{GTEST_ROOT}/lib/${CMAKE_BUILD_TYPE}/MT)
    else()
        link_directories($ENV{GTEST_ROOT}/lib/${CMAKE_BUILD_TYPE}/MD)
    endif()

    configure_msvc_runtime()

    # Remove warnings
    add_definitions(-D_SCL_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_WARNINGS)
    add_compile_options(/std:c++17)
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-instr-generate -fcoverage-mapping")
    message("-- CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
else()
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ftest-coverage -fprofile-arcs")
    message("-- CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
endif()

find_package(Boost REQUIRED)
if (Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
endif (Boost_FOUND)

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR})

add_subdirectory(dal)
add_subdirectory(tests)
add_subdirectory(examples)
