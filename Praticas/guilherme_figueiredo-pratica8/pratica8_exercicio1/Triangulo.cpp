#include <iostream>
#include <cmath>
#include <string> 

#include "Forma.h"
#include "Forma2D.h"
#include "Triangulo.h"

Triangulo::Triangulo(double lado1, double lado2, double base, double altura, std::string nome, std::string cor) : 
    _lado1(lado1), _lado2(lado2), _base(base), _altura(altura), _nome(nome), _cor(cor) {}

Triangulo::Triangulo(double lado, double base, double altura, std::string nome, std::string cor) : 
    _lado1(lado), _lado2(lado), _base(base), _altura(altura), _nome(nome), _cor(cor) {}

Triangulo::Triangulo(double lado, double altura, std::string nome, std::string cor) : 
    _lado1(lado), _lado2(lado), _base(lado), _altura(altura), _nome(nome), _cor(cor) {}

Triangulo::~Triangulo() {}

std::string Triangulo::get_cor(){
    return _cor;
}

std::string Triangulo::get_nome(){
    return _nome;
}

double Triangulo::get_area(){
    return (_base*_altura)/2.0;
}

double Triangulo::get_perimetro(){
    return _lado1+_lado2+_base;
}