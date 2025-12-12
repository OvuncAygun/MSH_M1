cmake_minimum_required(VERSION 3.10)
project(MSH_M1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(MSH_M1)

target_include_directories(MSH_M1
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        include/Test
    
    PRIVATE
        
        src
        src/adapters
        src/devices
        src/factories
        src/strategies
)

target_sources(MSH_M1
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include/DeviceType.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IDevice.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IDeviceFactory.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IProductFamilyFactory.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/MSH_M1.h
    
    PRIVATE
        src/MSH_M1.cpp
)

include(CTest)
enable_testing()

