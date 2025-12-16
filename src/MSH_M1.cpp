#include "MSH_M1.h"

#include "AlarmFactory.h"
#include "CameraFactory.h"
#include "LightFactory.h"
#include "MusicFactory.h"
#include "TVFactory.h"
#include "DetectorFactory.h"

MSH_M1::MSH_M1() = default;
MSH_M1::~MSH_M1() = default;

std::vector<IDeviceFactory*> MSH_M1::getDeviceFactories() {
    std::vector<IDeviceFactory*> factories;
    factories.push_back(new AlarmFactory());
    factories.push_back(new CameraFactory());
    factories.push_back(new LightFactory());
    factories.push_back(new MusicFactory());
    factories.push_back(new TVFactory());
    return factories;
}

std::vector<IProductFamilyFactory*> MSH_M1::getProductFamilyFactories() {
    std::vector<IProductFamilyFactory*> factories;
    factories.push_back(new DetectorFactory());
    return factories;
}