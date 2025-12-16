#pragma once

#include "DeviceFactory.h"

class AlarmFactory : public DeviceFactory {
public:
    AlarmFactory();
    ~AlarmFactory();

    IDevice* createDevice(std::string name, std::vector<std::string> config) override;
    IDevice* cloneDevice(IDevice* source) override;
};