#pragma once

#include "IDeviceFactory.hpp"

class DeviceFactory : public IDeviceFactory {
public:
    DeviceFactory();
    ~DeviceFactory();

protected:
    IObserver* observer;
};