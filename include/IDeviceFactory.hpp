#pragma once

#include "Test/IObserver.hpp"
#include "IDevice.hpp"

#include <string>
#include <vector>

class IDeviceFactory {
public:
    virtual ~IDeviceFactory() = 0;

    virtual IObserver* getObserver() = 0;
    virtual void setObserver(IObserver* observer) = 0;

    virtual IDevice* createDevice(std::string name, std::vector<std::string> config) = 0;
    virtual IDevice* cloneDevice(IDevice* source) = 0;

};