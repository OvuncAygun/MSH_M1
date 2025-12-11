#pragma once

#include "IDevice.hpp"
#include "IDeviceFactory.hpp"
#include "IProductFamilyFactory.hpp"

#include <vector>

class MSH_M1 {
public:
    MSH_M1();
    ~MSH_M1();

    std::vector<IDeviceFactory*> getDeviceFactories();
    std::vector<IProductFamilyFactory*> getProductFamilyFactories();

};