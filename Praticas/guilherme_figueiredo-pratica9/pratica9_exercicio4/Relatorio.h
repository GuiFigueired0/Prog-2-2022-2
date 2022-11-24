#ifndef RELATORIO_H
#define RELATORIO_H

#include <vector> 
#include <fstream>
#include "Funcionario.h"

class Relatorio
{
private:
    std::vector<Funcionario*> _funcionarios;
    double _gastoMensalTotal;
public:
    Relatorio();
    ~Relatorio();

    void leArquivo(std::string nomeArq);
    void calculaProporcionalFuncionario();
    void geraRelatorio(std::string nomeArq);
};

#endif