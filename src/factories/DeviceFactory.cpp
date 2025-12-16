#include "DeviceFactory.h"
#include "Device.h"

DeviceFactory::DeviceFactory() = default;
DeviceFactory::~DeviceFactory() = default;

IObserver* DeviceFactory::getObserver() {
    return observer;
}
void DeviceFactory::setObserver(IObserver* observer) {
    this->observer = observer;
}