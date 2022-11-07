#ifndef INF112_PACKAGE_H
#define INF112_PACKAGE_H

#include <string>
#include <iostream>

class Package{
private: 
    std::string _name; 
    std::string _adress;
    double _weight; 
    double _costPerKilo; 

public: 
    Package(std::string name, std::string adress, unsigned int weight, unsigned int costPerKilo);
    ~Package();

    std::string get_name();
    std::string get_adress();
    double get_weight();
    double get_costPerKilo();

    virtual double calculateCost();

};

#endif