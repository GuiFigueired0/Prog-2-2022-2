#include <iostream>
#include <cmath>
#include <string> 

#include "Forma.h"
#include "Forma2D.h"
#include "Esfera.h"

Esfera::Esfera(double raio, std::string nome, std::string cor) : 
    _raio(raio), _nome(nome), _cor(cor) {}

Esfera::~Esfera() {}

std::string Esfera::get_cor(){
    return _cor;
}

std::string Esfera::get_nome(){
    return _nome;
}

double Esfera::get_volume(){
    return (4.0/3.0)*M_PI*pow(_raio, 3);
}