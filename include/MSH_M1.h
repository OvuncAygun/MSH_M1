#pragma once

#include "IDevice.h"
#include "IDeviceFactory.h"
#include "IProductFamilyFactory.h"

#include <vector>

class MSH_M1 {
public:
    MSH_M1();
    ~MSH_M1();

    std::vector<IDeviceFactory*> getDeviceFactories();
    std::vector<IProductFamilyFactory*> getProductFamilyFactories();

};