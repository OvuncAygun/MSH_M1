#include "LightFactory.h"
#include "Light.h"
#include "ChineseLight.h"
#include "LightAdapter.h"
#include "Toggleable.h"
#include "Nondetecting.h"

LightFactory::LightFactory() = default;
LightFactory::~LightFactory() = default;

IDevice* LightFactory::createDevice(std::string name, std::vector<std::string> config) {
    Light* light = new Light();
    light->setName(name);
    light->setConfig(config);
    light->setDeviceType(DeviceType::TYPE_Light);
    light->setObserver(this->getObserver());
    light->setPowerStrategy(new Toggleable());
    light->setDetectorStrategy(new Nondetecting());
    ChineseLight* adaptee = new ChineseLight();
    LightAdapter* adapter = new LightAdapter();
    adapter->setAdaptee(adaptee);
    light->setAdapter(adapter);
    return light;
};

IDevice* LightFactory::cloneDevice(IDevice* source) {
    Device* sourceDevice = static_cast<Device*>(source);
    Light* light = new Light();
    light->setName(sourceDevice->getName());
    light->setConfig(sourceDevice->getConfig());
    light->setDeviceType(sourceDevice->getDeviceType());
    light->setObserver(sourceDevice->getObserver());
    light->setPowerStrategy(sourceDevice->getPowerStrategy());
    light->setDetectorStrategy(sourceDevice->getDetectorStrategy());
    ChineseLight* adaptee = new ChineseLight();
    LightAdapter* adapter = new LightAdapter();
    adapter->setAdaptee(adaptee);
    light->setAdapter(adapter);
    return light;
}