#include "DetectorFactory.h"
#include "SmokeDetector.h"
#include "GasDetector.h"
#include "Nontoggleable.h"
#include "Detecting.h"

DetectorFactory::DetectorFactory() = default;
DetectorFactory::~DetectorFactory() = default;

IDevice* DetectorFactory::createSmokeDetector(std::string name, std::vector<std::string> config) {
    SmokeDetector* smokeDetector = new SmokeDetector();
    smokeDetector->setName(name);
    smokeDetector->setConfig(config);
    smokeDetector->setDeviceType(DeviceType::TYPE_SmokeDetector);
    smokeDetector->setObserver(this->getObserver());
    smokeDetector->setPowerStrategy(new Nontoggleable());
    smokeDetector->setDetectorStrategy(new Detecting());
    return smokeDetector;
};

IDevice* DetectorFactory::createGasDetector(std::string name, std::vector<std::string> config) {
    GasDetector* gasDetector = new GasDetector();
    gasDetector->setName(name);
    gasDetector->setConfig(config);
    gasDetector->setDeviceType(DeviceType::TYPE_GasDetector);
    gasDetector->setObserver(this->getObserver());
    gasDetector->setPowerStrategy(new Nontoggleable());
    gasDetector->setDetectorStrategy(new Detecting());
    return gasDetector;
};

std::vector<IDevice*> DetectorFactory::createDevices(std::vector<std::string> name,
        std::vector<std::vector<std::string>> config) {
    std::vector<IDevice*> devices;
    devices.push_back(createSmokeDetector(name[0], config[0]));
    devices.push_back(createGasDetector(name[1], config[1]));
    return devices;
}

std::vector<IDevice*> DetectorFactory::cloneDevices(std::vector<IDevice*> sources) {
    std::vector<IDevice*> devices;
    Device* sourceDevice1 = static_cast<Device*>(sources[0]);
    Device* device1 = new Device();
    device1->setName(sourceDevice1->getName());
    device1->setConfig(sourceDevice1->getConfig());
    device1->setDeviceType(sourceDevice1->getDeviceType());
    device1->setObserver(sourceDevice1->getObserver());
    device1->setPowerStrategy(sourceDevice1->getPowerStrategy());
    device1->setDetectorStrategy(sourceDevice1->getDetectorStrategy());
    devices.push_back(device1);

    Device* sourceDevice2 = static_cast<Device*>(sources[1]);
    Device* device2 = new Device();
    device2->setName(sourceDevice2->getName());
    device2->setConfig(sourceDevice2->getConfig());
    device2->setDeviceType(sourceDevice2->getDeviceType());
    device2->setObserver(sourceDevice2->getObserver());
    device2->setPowerStrategy(sourceDevice2->getPowerStrategy());
    device2->setDetectorStrategy(sourceDevice2->getDetectorStrategy());
    devices.push_back(device2);

    return devices;
}