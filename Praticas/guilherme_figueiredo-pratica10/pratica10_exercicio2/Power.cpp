#include <iostream> 

#include "Power.h"

int Power::calculaPotencia(int k, int n){
    if(n == 1) return k; 
    return k * calculaPotencia(k, n-1);
}
