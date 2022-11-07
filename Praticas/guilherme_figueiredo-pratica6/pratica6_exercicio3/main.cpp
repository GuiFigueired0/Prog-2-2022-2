#include <iostream>

#include "package.h"
#include "twoDayPackage.h"
#include "overnightPackage.h"

int main(){

    Package package("Pacote 1", "Rua dos Passos, 73", 20, 15);
    TwoDayPackage two_day_package("Pacote 2 ", "Av. PH Holfs, s/n", 5, 15, 10);
    OvernightPackage over_night_package("Pacote 3", "Av. Santa Rita, 110", 50, 15, 15);

    std::cout << package.calculateCost() << std::endl;
    std::cout << two_day_package.calculateCost() << std::endl;
    std::cout << over_night_package.calculateCost() << std::endl;

    return 0; 
}