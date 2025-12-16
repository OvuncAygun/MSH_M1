#include "CameraFactory.h"
#include "Camera.h"
#include "Nontoggleable.h"
#include "Detecting.h"

CameraFactory::CameraFactory() = default;
CameraFactory::~CameraFactory() = default;

IDevice* CameraFactory::createDevice(std::string name, std::vector<std::string> config) {
    Camera* camera = new Camera();
    camera->setName(name);
    camera->setConfig(config);
    camera->setDeviceType(DeviceType::TYPE_Camera);
    camera->setObserver(this->getObserver());
    camera->setPowerStrategy(new Nontoggleable());
    camera->setDetectorStrategy(new Detecting());
    return camera;
};

IDevice* CameraFactory::cloneDevice(IDevice* source) {
    Device* sourceDevice = static_cast<Device*>(source);
    Camera* camera = new Camera();
    camera->setName(sourceDevice->getName());
    camera->setConfig(sourceDevice->getConfig());
    camera->setDeviceType(sourceDevice->getDeviceType());
    camera->setObserver(sourceDevice->getObserver());
    camera->setPowerStrategy(sourceDevice->getPowerStrategy());
    camera->setDetectorStrategy(sourceDevice->getDetectorStrategy());
    return camera;
}