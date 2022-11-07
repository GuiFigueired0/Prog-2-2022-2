#ifndef INF112_TWODAYPACKAGE_H
#define INF112_TWODAYPACKAGE_H

#include <vector>
#include <iostream>

#include "package.h"

class TwoDayPackage : public Package
{
private:
    double _flatRate;
    
public:
    TwoDayPackage(std::string name, std::string adress, unsigned int weight, unsigned int costPerKilo, double flateRate);
    ~TwoDayPackage();

    double get_flatRate();

    double calculateCost() override;
    
};

#endif