#include <fstream>

#include "Relatorio.h"
#include "Funcionario.h"

int main(){

    Relatorio controleDespesas;

    controleDespesas.leArquivo("entrada.txt");
    controleDespesas.calculaProporcionalFuncionario();
    controleDespesas.geraRelatorio("relatorio.txt");

    return 0;
}
