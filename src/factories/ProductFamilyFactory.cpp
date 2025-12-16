#include "ProductFamilyFactory.h"
#include "Device.h"

ProductFamilyFactory::ProductFamilyFactory() = default;
ProductFamilyFactory::~ProductFamilyFactory() = default;

IObserver* ProductFamilyFactory::getObserver() {
    return observer;
}
void ProductFamilyFactory::setObserver(IObserver* observer) {
    this->observer = observer;
}