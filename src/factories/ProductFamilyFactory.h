#pragma once

#include "IProductFamilyFactory.h"

class ProductFamilyFactory : public IProductFamilyFactory {
public:
    ProductFamilyFactory();
    ~ProductFamilyFactory();

protected:
    IObserver* observer;
    
};