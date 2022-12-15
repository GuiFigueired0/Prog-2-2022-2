#include <iostream>

#include "Soma.h"

int Soma::calculaSomatorio(int m, int n){
    if(m == n) return m;
    return m + calculaSomatorio(m+1, n);
}