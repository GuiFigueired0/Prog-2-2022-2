#ifndef INF112_OVERNIGHTPACKAGE_H
#define INF112_OVERNIGHTPACKAGE_H

#include <string> 

#include "package.h"

class OvernightPackage : public Package
{
private:
    double _additionalFee;
public:
    OvernightPackage(std::string name, std::string adress, unsigned int weight, unsigned int costPerKilo, double additionalFee);
    ~OvernightPackage();

    double get_additionalFee();

    double calculateCost() override;

};
 
#endif