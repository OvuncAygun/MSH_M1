#pragma once

#include "IDevice.h"
#include "PowerStrategy.h"
#include "DetectorStrategy.h"
#include "IObserver.h"

class Device : public IDevice {
public:
    Device();
    ~Device();

    std::string getName() override;
    void setName(const std::string& name) override;

    std::vector<std::string> getConfig() override;
    void setConfig(const std::vector<std::string>& config) override;

    bool getPowerState() override;
    void setPowerState(bool powerState) override;

    bool getOperationState() override;
    void setOperationState(bool operationState) override;

    DeviceType getDeviceType() override;
    void setDeviceType(DeviceType deviceType) override;

    int getIndex() override;
    void setIndex(int index) override;

    void poweron() override;
    void poweroff() override;
    void detect() override;
    
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