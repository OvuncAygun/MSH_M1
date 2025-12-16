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
    light->setPowerStrategy(new Toggleable());
    light->setDetectorStrategy(new Nondetecting());
    ChineseLight* adaptee = new ChineseLight();
    LightAdapter* adapter = new LightAdapter();
    adapter->setAdaptee(adaptee);
    light->setAdapter(adapter);
    return light;
};

IDevice* LightFactory::cloneDevice(IDevice* source) {
    Light* light = new Light();
    light->setName(source->getName());
    light->setConfig(source->getConfig());
    light->setDeviceType(source->getDeviceType());
    light->setPowerStrategy(new Toggleable());
    light->setDetectorStrategy(new Nondetecting());
    ChineseLight* adaptee = new ChineseLight();
    LightAdapter* adapter = new LightAdapter();
    adapter->setAdaptee(adaptee);
    light->setAdapter(adapter);
    return light;
}