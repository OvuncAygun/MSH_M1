#pragma once

#include "IDevice.h"
#include "PowerStrategy.h"
#include "DetectorStrategy.h"
#include "IObserver.h"

class Device : public IDevice {
public:
    Device();
    ~Device();
    
    PowerStrategy* getPowerStrategy();
    void setPowerStrategy(PowerStrategy* powerStrategy);

    DetectorStrategy* getDetectorStrategy();
    void setDetectorStrategy(DetectorStrategy* detectorStrategy);
    IObserver* getObserver();
    void setObserver(IObserver* observer);

protected:
    std::string name;
    std::vector<std::string> config;
    bool powerState;
    bool operationState;
    DeviceType deviceType;
    int index;
    PowerStrategy* powerStrategy;
    DetectorStrategy* detectorStrategy;
    IObserver* observer;

};