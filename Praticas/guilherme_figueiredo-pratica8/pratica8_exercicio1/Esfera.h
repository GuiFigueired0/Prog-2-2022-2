#ifndef ESFERA_H
#define ESFERA_H

#include <iostream> 

#include "Forma.h"
#include "Forma3D.h"

class Esfera : public Forma3D
{
private:
    double _raio;
    std::string _nome;
    std::string _cor;

public:
    Esfera(double raio, std::string nome, std::string cor);
    ~Esfera();

    virtual std::string get_cor();
    virtual std::string get_nome();
    virtual double get_volume();
};

#endif