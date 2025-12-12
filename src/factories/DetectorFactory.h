#pragma once

#include "ProductFamilyFactory.h"

class DetectorFactory : public ProductFamilyFactory {
public:
    DetectorFactory();
    ~DetectorFactory();

private:
    void createSmokeDetector(std::string name, std::vector<std::string> config);
    void createGasDetector(std::string name, std::vector<std::string> config);
};