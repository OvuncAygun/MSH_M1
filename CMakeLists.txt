cmake_minimum_required(VERSION 3.10.0)
project(MSH_M1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXTERNAL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/external)

add_executable(MSH_M1
    src/main.cpp
)

include(CTest)
enable_testing()

