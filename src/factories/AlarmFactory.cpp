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
    alarm->setPowerStrategy(new Toggleable());
    alarm->setDetectorStrategy(new Nondetecting());
    return alarm;
};

IDevice* AlarmFactory::cloneDevice(IDevice* source) {
    Alarm* alarm = new Alarm();
    alarm->setName(source->getName());
    alarm->setConfig(source->getConfig());
    alarm->setDeviceType(source->getDeviceType());
    alarm->setPowerStrategy(new Toggleable());
    alarm->setDetectorStrategy(new Nondetecting());
    return alarm;
}