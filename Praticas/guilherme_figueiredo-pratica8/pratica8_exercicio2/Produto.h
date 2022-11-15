#ifndef PRODUTO_H
#define PRODUTO_H 

#include <string>

class Produto
{
private:
    int _codigo;
    std::string _descricao;
    double _precoCompra;
    double _percentualLucro;
   
public:
    Produto(int codigo, std::string descricao, double precoCompra, double percentualLucro);
    ~Produto();

    int get_codigo();
    std::string get_descricao();
    double get_precoCompra();
    double get_percentualLucro();

    virtual double gerarPrecoDeVenda();
};

#endif