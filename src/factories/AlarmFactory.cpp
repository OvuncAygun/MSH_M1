#include "AlarmFactory.h"
#include "Alarm.h"
#include "Toggleable.h"
#include "Nondetecting.h"

AlarmFactory::AlarmFactory() = default;
AlarmFactory::~AlarmFactory() = default;

IDevice* AlarmFactory::createDevice(std::string name, std::vector<std::string> config) {
    Alarm* alarm = new Alarm();
    alarm->setName(name);
    alarm->setConfig(config);
    alarm->setDeviceType(DeviceType::TYPE_Alarm);
    alarm->setObserver(this->getObserver());
    alarm->setPowerStrategy(new Toggleable());
    alarm->setDetectorStrategy(new Nondetecting());
    return alarm;
};

IDevice* AlarmFactory::cloneDevice(IDevice* source) {
    Device* sourceDevice = static_cast<Device*>(source);
    Alarm* alarm = new Alarm();
    alarm->setName(sourceDevice->getName());
    alarm->setConfig(sourceDevice->getConfig());
    alarm->setDeviceType(sourceDevice->getDeviceType());
    alarm->setObserver(sourceDevice->getObserver());
    alarm->setPowerStrategy(sourceDevice->getPowerStrategy());
    alarm->setDetectorStrategy(sourceDevice->getDetectorStrategy());
    return alarm;
}