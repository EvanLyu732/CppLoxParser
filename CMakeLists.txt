cmake_minimum_required(VERSION 3.15)
project(cxx_lox_parser
    VERSION 0.0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE src_codes
    ${CMAKE_SOURCE_DIR}/src/*cpp
    ${CMAKE_SOURCE_DIR}/src/*h
)

message(STATUS "ready to generate source codes: " ${src_codes})

add_executable(${PROJECT_NAME}
    ${src_codes}
)

target_include_directories(${PROJECT_NAME} PRIVATE
    src
)

