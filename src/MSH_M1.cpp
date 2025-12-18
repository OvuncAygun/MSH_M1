#include "MSH_M1.h"

#include "AlarmFactory.h"
#include "CameraFactory.h"
#include "LightFactory.h"
#include "MusicFactory.h"
#include "TVFactory.h"
#include "DetectorFactory.h"

MSH_M1::MSH_M1() = default;
MSH_M1::~MSH_M1() = default;

void MSH_M1::setObserver(IObserver* observer) {
    this->observer = observer;
}

void MSH_M1::createFactories() {
    deviceFactories.clear();
    productFamilyFactories.clear();

    deviceFactories.push_back(new AlarmFactory());
    deviceFactories.push_back(new CameraFactory());
    deviceFactories.push_back(new LightFactory());
    deviceFactories.push_back(new MusicFactory());
    deviceFactories.push_back(new TVFactory());

    productFamilyFactories.push_back(new DetectorFactory());

    for (IDeviceFactory* factory : deviceFactories) {
        factory->setObserver(observer);
    }

    for (IProductFamilyFactory* factory : productFamilyFactories) {
        factory->setObserver(observer);
    }
}

std::vector<IDeviceFactory*> MSH_M1::getDeviceFactories() {
    return deviceFactories;
}

std::vector<IProductFamilyFactory*> MSH_M1::getProductFamilyFactories() {
    return productFamilyFactories;
}