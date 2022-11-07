#include <iostream>
#include <string> 

#include "package.h"
#include "overnightPackage.h"

OvernightPackage::OvernightPackage(std::string name, std::string adress, unsigned int weight, unsigned int costPerKilo, double additionalFee) :
    Package(name, adress, weight, costPerKilo), _additionalFee(additionalFee) {}

OvernightPackage::~OvernightPackage() {}

double OvernightPackage::get_additionalFee(){
    return _additionalFee;
}

double OvernightPackage::calculateCost() {
    return (get_additionalFee() + get_costPerKilo()) * get_weight();
}