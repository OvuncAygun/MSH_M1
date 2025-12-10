#pragma once

#include "IProductFamilyFactory.hpp"

class ProductFamilyFactory : public IProductFamilyFactory {
public:
    ProductFamilyFactory();
    ~ProductFamilyFactory();

protected:
    IObserver* observer;
    
};