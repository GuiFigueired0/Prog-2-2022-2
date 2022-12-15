#include <iostream>

#include "MDC.h"

int MDC::calculaMDC(int x, int y, int aux){
    if((x % aux) == 0 && (y % aux) == 0) return aux;

    return calculaMDC(x, y, aux-1);
}
