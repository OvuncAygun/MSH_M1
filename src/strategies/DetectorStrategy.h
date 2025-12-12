#pragma once

class DetectorStrategy {
public:
    DetectorStrategy();
    virtual ~DetectorStrategy() = 0;

    virtual void detect() = 0;
};