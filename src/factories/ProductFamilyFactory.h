#pragma once

#include "IProductFamilyFactory.h"

class ProductFamilyFactory : public IProductFamilyFactory {
public:
    ProductFamilyFactory();
    ~ProductFamilyFactory();

    IObserver* getObserver() override;
    void setObserver(IObserver* observer) override;

protected:
    IObserver* observer;
    
};