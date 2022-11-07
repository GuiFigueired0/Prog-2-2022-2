#include <iostream>

#include "package.h"

Package::Package(std::string name, std::string adress, unsigned int weight, unsigned int costPerKilo) : 
    _name(name), _adress(adress), _weight(weight), _costPerKilo(costPerKilo) {}

Package::~Package(){}

std::string Package::get_name(){
    return _name;
}

std::string Package::get_adress(){
    return _adress;
}

double Package::get_weight(){
    return _weight;
}

double Package::get_costPerKilo(){
    return _costPerKilo;
}

double Package::calculateCost(){
    return get_weight() * get_costPerKilo();
}

