#ifndef CUBO_H
#define CUBO_H

#include <iostream> 

#include "Forma.h"
#include "Forma3D.h"

class Cubo : Forma3D
{
private:
    double _lado;
    std::string _nome;
    std::string _cor;

public:
    Cubo(double lado, std::string nome, std::string cor);
    ~Cubo();

    virtual std::string get_cor();
    virtual std::string get_nome();
    virtual double get_volume();
};

#endif