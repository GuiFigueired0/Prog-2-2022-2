#ifndef REMEDIO_H
#define REMEDIO_H

#include "Produto.h"
#include <string.h>

class Remedio : public Produto
{
private:
    double _descontoLaboratorio;
public:
    Remedio(int codigo, std::string descricao, double precoCompra, double percentualLucro, double descontoLaboratorio);
    ~Remedio();

    double get_valorDoDesconto();
    virtual double gerarPrecoDeVenda() override;
};

#endif