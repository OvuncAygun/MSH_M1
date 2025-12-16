#include "TVFactory.h"
#include "TV.h"
#include "Toggleable.h"
#include "Nondetecting.h"

TVFactory::TVFactory() = default;
TVFactory::~TVFactory() = default;

IDevice* TVFactory::createDevice(std::string name, std::vector<std::string> config) {
    TV* tv = new TV();
    tv->setName(name);
    tv->setConfig(config);
    tv->setDeviceType(DeviceType::TYPE_TV);
    tv->setObserver(this->getObserver());
    tv->setPowerStrategy(new Toggleable());
    tv->setDetectorStrategy(new Nondetecting());
    return tv;
};

IDevice* TVFactory::cloneDevice(IDevice* source) {
    Device* sourceDevice = static_cast<Device*>(source);
    TV* tv = new TV();
    tv->setName(sourceDevice->getName());
    tv->setConfig(sourceDevice->getConfig());
    tv->setDeviceType(sourceDevice->getDeviceType());
    tv->setObserver(sourceDevice->getObserver());
    tv->setPowerStrategy(sourceDevice->getPowerStrategy());
    tv->setDetectorStrategy(sourceDevice->getDetectorStrategy());
    return tv;
}