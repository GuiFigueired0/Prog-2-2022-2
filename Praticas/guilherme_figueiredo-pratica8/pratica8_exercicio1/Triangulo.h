#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream> 

#include "Forma.h"
#include "Forma2D.h"

class Triangulo : public Forma2D
{
private:
    double _lado1;
    double _lado2; 
    double _base; 
    double _altura;
    std::string _nome;
    std::string _cor;

public:
    Triangulo(double lado1, double lado2, double base, double altura, std::string nome, std::string cor);
    Triangulo(double lado,double base, double altura, std::string nome, std::string cor);
    Triangulo(double lado, double altura, std::string nome, std::string cor);
    ~Triangulo();

    virtual std::string get_cor();
    virtual std::string get_nome();
    virtual double get_area(); 
    virtual double get_perimetro();
};

#endif