#include <iostream>

#include "Soma.h"

int main(){
    Soma x; 
    int m, n;

    std::cout << "Digite m: ";
    std::cin >> m;
    std::cout << "Digite n: ";
    std::cin >> n;

    std::cout << x.calculaSomatorio(m, n) << std::endl;
}