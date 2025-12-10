#pragma once

class IObserver {
public:
    IObserver();
    virtual ~IObserver() = 0;

    virtual void update() = 0;

};