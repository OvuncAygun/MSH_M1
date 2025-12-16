#pragma once

# include "DeviceFactory.h"

class MusicFactory : public DeviceFactory {
public:
    MusicFactory();
    ~MusicFactory();

    IDevice* createDevice(std::string name, std::vector<std::string> config) override;
    IDevice* cloneDevice(IDevice* source) override;
};