cmake_minimum_required(VERSION 4.0)

project(LCS LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME}
    include/lcs.h
    src/lcs.cpp
    src/main.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC include)