#include <iostream>
#include <string.h>

#include "Produto.h"
#include "ArtigoHigiene.h"

ArtigoHigiene::ArtigoHigiene(int codigo, std::string descricao, double precoCompra) :
    Produto(codigo, descricao, precoCompra, 30.00) {}

ArtigoHigiene::~ArtigoHigiene() {}