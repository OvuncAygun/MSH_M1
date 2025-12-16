#include "Device.h"

Device::Device() = default;
Device::~Device() = default;

std::string Device::getName() {
    return name;
}
void Device::setName(const std::string& name) {
    this->name = name;
}

std::vector<std::string> Device::getConfig() {
    return config;
}
void Device::setConfig(const std::vector<std::string>& config) {
    this->config = config;
}

bool Device::getPowerState() {
    return powerState;
}
void Device::setPowerState(bool powerState) {
    this->powerState = powerState;
}

bool Device::getOperationState() {
    return operationState;
}
void Device::setOperationState(bool operationState) {
    this->operationState = operationState;
}

DeviceType Device::getDeviceType() {
    return deviceType;
}
void Device::setDeviceType(DeviceType deviceType) {
    this->deviceType = deviceType;
}

int Device::getIndex() {
    return index;
}
void Device::setIndex(int index) {
    this->index = index;
}

void Device::poweron() {
    powerStrategy->poweron(&powerState);
}

void Device::poweroff() {
    powerStrategy->poweroff(&powerState);
}

void Device::detect() {
    detectorStrategy->detect();
}

PowerStrategy* Device::getPowerStrategy() {
    return powerStrategy;
}
void Device::setPowerStrategy(PowerStrategy* powerStrategy) {
    this->powerStrategy = powerStrategy;
}

DetectorStrategy* Device::getDetectorStrategy() {
    return detectorStrategy;
}
void Device::setDetectorStrategy(DetectorStrategy* detectorStrategy) {
    this->detectorStrategy = detectorStrategy;
}

IObserver* Device::getObserver() {
    return observer;
}
void Device::setObserver(IObserver* observer) {
    this->observer = observer;
}