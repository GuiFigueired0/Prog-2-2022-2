#include <iostream>
#include <string.h>

#include "Produto.h"
#include "Remedio.h"

Remedio::Remedio(int codigo, std::string descricao, double precoCompra, double percentualLucro, double descontoLaboratorio) :
    Produto(codigo, descricao, precoCompra, percentualLucro), _descontoLaboratorio(descontoLaboratorio) {}

Remedio::~Remedio() {}

double Remedio::get_valorDoDesconto(){
    return _descontoLaboratorio;
}
double Remedio::gerarPrecoDeVenda(){
    return Produto::gerarPrecoDeVenda() - _descontoLaboratorio;
}