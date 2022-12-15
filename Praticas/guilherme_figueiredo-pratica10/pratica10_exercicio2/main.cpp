#include <iostream> 

#include  "Power.h"

int main(){
    Power x; 
    int k, n;
    
    std::cout << "Digite k: ";
    std::cin >> k;
    std::cout << "Digite n: ";
    std::cin >> n;

    std::cout << x.calculaPotencia(k, n) << std::endl;
}