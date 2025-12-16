#pragma once

#include "ProductFamilyFactory.h"

class DetectorFactory : public ProductFamilyFactory {
public:
    DetectorFactory();
    ~DetectorFactory();

    std::vector<IDevice*> createDevices(std::vector<std::string> name,
        std::vector<std::vector<std::string>> config) override;
    std::vector<IDevice*> cloneDevice(std::vector<IDevice*> sources) override;

private:
    IDevice* createSmokeDetector(std::string name, std::vector<std::string> config);
    IDevice* createGasDetector(std::string name, std::vector<std::string> config);
};