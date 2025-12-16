#pragma once

#include "DeviceFactory.h"

class TVFactory : public DeviceFactory {
public:
    TVFactory();
    ~TVFactory();

    IDevice* createDevice(std::string name, std::vector<std::string> config) override;
    IDevice* cloneDevice(IDevice* source) override;
};