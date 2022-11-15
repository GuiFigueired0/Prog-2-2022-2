#include <iostream>
#include <cmath>
#include <string> 

#include "Forma.h"
#include "Forma2D.h"
#include "Quadrado.h"

Quadrado::Quadrado(double lado, std::string nome, std::string cor) : 
    _lado(lado), _nome(nome), _cor(cor) {}

Quadrado::~Quadrado() {}

std::string Quadrado::get_cor(){
    return _cor;
}

std::string Quadrado::get_nome(){
    return _nome;
}

double Quadrado::get_area(){
    return pow(_lado, 2);
}

double Quadrado::get_perimetro(){
    return _lado*4;
}