#ifndef QUADRADO_H
#define QUADRADO_H

#include <iostream> 

#include "Forma.h"
#include "Forma2D.h"

class Quadrado : public Forma2D
{
private:
    double _lado;
    std::string _nome;
    std::string _cor;

public:
    Quadrado(double lado, std::string nome, std::string cor);
    ~Quadrado();

    virtual std::string get_cor();
    virtual std::string get_nome();
    virtual double get_area(); 
    virtual double get_perimetro();
};

#endif