#include "MusicFactory.h"
#include "Music.h"
#include "Toggleable.h"
#include "Nondetecting.h"

MusicFactory::MusicFactory() = default;
MusicFactory::~MusicFactory() = default;

IDevice* MusicFactory::createDevice(std::string name, std::vector<std::string> config) {
    Music* music = new Music();
    music->setName(name);
    music->setConfig(config);
    music->setDeviceType(DeviceType::TYPE_Music);
    music->setObserver(this->getObserver());
    music->setPowerStrategy(new Toggleable());
    music->setDetectorStrategy(new Nondetecting());
    return music;
};

IDevice* MusicFactory::cloneDevice(IDevice* source) {
    Device* sourceDevice = static_cast<Device*>(source);
    Music* music = new Music();
    music->setName(sourceDevice->getName());
    music->setConfig(sourceDevice->getConfig());
    music->setDeviceType(sourceDevice->getDeviceType());
    music->setObserver(sourceDevice->getObserver());
    music->setPowerStrategy(sourceDevice->getPowerStrategy());
    music->setDetectorStrategy(sourceDevice->getDetectorStrategy());
    return music;
}