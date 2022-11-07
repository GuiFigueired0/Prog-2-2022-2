#include <iostream>
#include <string> 

#include "package.h"
#include "twoDayPackage.h"



TwoDayPackage::TwoDayPackage(std::string name, std::string adress, unsigned int weight, unsigned int costPerKilo, double flateRate) :
    Package(name, adress, weight, costPerKilo), _flatRate(flateRate) {}

TwoDayPackage::~TwoDayPackage() {}

double TwoDayPackage::get_flatRate(){
    return _flatRate;
}

double TwoDayPackage::calculateCost() {
    return Package::calculateCost() + get_flatRate();
}