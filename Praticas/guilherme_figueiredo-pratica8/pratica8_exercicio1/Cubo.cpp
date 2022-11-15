#include <iostream>
#include <cmath>
#include <string> 

#include "Forma.h"
#include "Forma2D.h"
#include "Cubo.h"

Cubo::Cubo(double lado, std::string nome, std::string cor) : 
    _lado(lado), _nome(nome), _cor(cor) {}

Cubo::~Cubo() {}

std::string Cubo::get_cor(){
    return _cor;
}

std::string Cubo::get_nome(){
    return _nome;
}

double Cubo::get_volume(){
    return pow(_lado, 3);
}