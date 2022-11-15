#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream> 

#include "Forma.h"
#include "Forma2D.h"

class Circulo : public Forma2D
{
private:
    double _raio;
    std::string _nome;
    std::string _cor;

public:
    Circulo(double raio, std::string nome, std::string cor);
    ~Circulo();

    virtual std::string get_cor();
    virtual std::string get_nome();
    virtual double get_area(); 
    virtual double get_perimetro();
};

#endif