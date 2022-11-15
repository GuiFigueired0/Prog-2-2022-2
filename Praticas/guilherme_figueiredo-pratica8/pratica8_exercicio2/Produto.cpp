#include <iostream>
#include <string> 

#include "Produto.h"

Produto::Produto(int codigo, std::string descricao, double precoCompra, double percentualLucro) :
    _codigo(codigo), _descricao(descricao), _precoCompra(precoCompra), _percentualLucro(percentualLucro) {}

Produto::~Produto() {}

int Produto::get_codigo(){
    return _codigo;
}

std::string Produto::get_descricao(){
    return _descricao;
}

double Produto::get_precoCompra(){
    return _precoCompra;
}

double Produto::get_percentualLucro(){
    return _percentualLucro;
}

double Produto::gerarPrecoDeVenda(){
    return _precoCompra+((_precoCompra*_percentualLucro)/100);
}