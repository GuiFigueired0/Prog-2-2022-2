#ifndef ARTIGO_HIGIENE_H
#define ARTIGO_HIGIENE_H

#include "Produto.h"
#include <string.h>

class ArtigoHigiene : public Produto
{
public:
    ArtigoHigiene(int codigo, std::string descricao, double precoCompra);
    ~ArtigoHigiene();

    double get_descontoLaboratorio();
};

#endif