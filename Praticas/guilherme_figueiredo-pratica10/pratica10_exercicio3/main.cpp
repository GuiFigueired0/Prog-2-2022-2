#include <iostream>  

#include "MDC.h"

int main(){
    MDC a; 
    int x, y, aux;

    std::cout << "Digite x: ";
    std::cin >> x;
    std::cout << "Digite y: ";
    std::cin >> y;

    (x >= y) ? aux = y : aux = x;

    std::cout << a.calculaMDC(x, y, aux) << std::endl;
}