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
    tv->setPowerStrategy(new Toggleable());
    tv->setDetectorStrategy(new Nondetecting());
    return tv;
};

IDevice* TVFactory::cloneDevice(IDevice* source) {
    TV* tv = new TV();
    tv->setName(source->getName());
    tv->setConfig(source->getConfig());
    tv->setDeviceType(source->getDeviceType());
    tv->setPowerStrategy(new Toggleable());
    tv->setDetectorStrategy(new Nondetecting());
    return tv;
}