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
    music->setPowerStrategy(new Toggleable());
    music->setDetectorStrategy(new Nondetecting());
    return music;
};

IDevice* MusicFactory::cloneDevice(IDevice* source) {
    Music* music = new Music();
    music->setName(source->getName());
    music->setConfig(source->getConfig());
    music->setDeviceType(source->getDeviceType());
    music->setPowerStrategy(new Toggleable());
    music->setDetectorStrategy(new Nondetecting());
    return music;
}