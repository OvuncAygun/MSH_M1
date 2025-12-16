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
    camera->setPowerStrategy(new Nontoggleable());
    camera->setDetectorStrategy(new Detecting());
    return camera;
};

IDevice* CameraFactory::cloneDevice(IDevice* source) {
    Camera* camera = new Camera();
    camera->setName(source->getName());
    camera->setConfig(source->getConfig());
    camera->setDeviceType(source->getDeviceType());
    camera->setPowerStrategy(new Nontoggleable());
    camera->setDetectorStrategy(new Detecting());
    return camera;
}