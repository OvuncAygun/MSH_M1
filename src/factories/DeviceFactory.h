#pragma once

#include "IDeviceFactory.h"

class DeviceFactory : public IDeviceFactory {
public:
    DeviceFactory();
    ~DeviceFactory();

protected:
    IObserver* observer;
};