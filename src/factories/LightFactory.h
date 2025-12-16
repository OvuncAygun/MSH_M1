#pragma once

# include "DeviceFactory.h"

class LightFactory : public DeviceFactory {
public:
    LightFactory();
    ~LightFactory();

    IDevice* createDevice(std::string name, std::vector<std::string> config) override;
    IDevice* cloneDevice(IDevice* source) override;
};