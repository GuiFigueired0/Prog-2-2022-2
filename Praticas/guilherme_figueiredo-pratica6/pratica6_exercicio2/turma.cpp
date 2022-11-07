#include <iostream>
#include <string>

#include "turma.h"

Turma::Turma(std::string codigo, int ano)
{
    _codigo = codigo;
    _ano = ano;
}

Turma::~Turma()
{
}

std::string Turma::get_codigo()
{
    return _codigo;
}

int Turma::get_ano()
{
    return _ano;
}

void Turma::set_codigo(std::string codigo)
{
    _codigo = codigo;
}

void Turma::set_ano(int ano)
{
    _ano = ano;
}