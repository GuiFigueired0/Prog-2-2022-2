#include <iostream>
#include <cmath>
#include <string> 

#include "Forma.h"
#include "Forma2D.h"
#include "Circulo.h"

Circulo::Circulo(double raio, std::string nome, std::string cor) : 
    _raio(raio), _nome(nome), _cor(cor) {}

Circulo::~Circulo() {}

std::string Circulo::get_cor(){
    return _cor;
}

std::string Circulo::get_nome(){
    return _nome;
}

double Circulo::get_area(){
    return M_PI*pow(_raio, 2);
}

double Circulo::get_perimetro(){
    return _raio*2*M_PI;
}