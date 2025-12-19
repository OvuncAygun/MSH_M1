cmake_minimum_required(VERSION 3.10)
project(MSH_M1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(MSH_M1)

target_include_directories(MSH_M1
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
        ${CMAKE_CURRENT_SOURCE_DIR}/src/adapters
        ${CMAKE_CURRENT_SOURCE_DIR}/src/devices
        ${CMAKE_CURRENT_SOURCE_DIR}/src/strategies
        ${CMAKE_CURRENT_SOURCE_DIR}/src/factories
)

target_sources(MSH_M1
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include/DeviceType.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IDevice.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IDeviceFactory.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IProductFamilyFactory.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/IObserver.h
        ${CMAKE_CURRENT_SOURCE_DIR}/include/MSH_M1.h
    
    PRIVATE
        src/MSH_M1.cpp

        src/adapters/ChineseLight.cpp
        src/adapters/LightAdapter.cpp

        src/strategies/Toggleable.cpp
        src/strategies/Nontoggleable.cpp
        src/strategies/Detecting.cpp
        src/strategies/Nondetecting.cpp

        src/devices/Device.cpp
        src/devices/Alarm.cpp
        src/devices/Camera.cpp
        src/devices/GasDetector.cpp
        src/devices/Light.cpp
        src/devices/Music.cpp
        src/devices/SmokeDetector.cpp
        src/devices/TV.cpp

        src/factories/DeviceFactory.cpp
        src/factories/AlarmFactory.cpp
        src/factories/CameraFactory.cpp
        src/factories/LightFactory.cpp
        src/factories/MusicFactory.cpp
        src/factories/TVFactory.cpp
        src/factories/ProductFamilyFactory.cpp
        src/factories/DetectorFactory.cpp

)

include(CTest)
enable_testing()

