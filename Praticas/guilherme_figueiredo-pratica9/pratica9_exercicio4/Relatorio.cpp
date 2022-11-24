#include <fstream> 
#include <iostream>
#include <iomanip>
#include <vector>

#include "Relatorio.h"

Relatorio::Relatorio() {
    _gastoMensalTotal = 0;
}
    
Relatorio::~Relatorio()
{
    _funcionarios.clear();
}

void Relatorio::leArquivo(std::string nomeArq){
    std::ifstream entrada(nomeArq);
    if(!entrada.is_open()){
        std::cerr << "Nao foi possivel a abertura do arquivo." << std::endl;
        std::cerr << "Verifique o nome do arquivo e tente novamente." << std::endl;
        exit(1);
    }

    std::string nome;
    double gastoMensal;
    
    while(!entrada.eof()){
        entrada >> nome; 
        entrada.ignore(3);
        entrada >> gastoMensal;
        _gastoMensalTotal += gastoMensal;

        Funcionario *empregado = new Funcionario(nome, gastoMensal);
        _funcionarios.push_back(empregado);
    }

    entrada.close();
}

void Relatorio::geraRelatorio(std::string nomeArq){
    std::ofstream fout(nomeArq);

    fout << "Nro. Funcionario Gasto % \n";
    for(int i=0; i<_funcionarios.size(); i++){
        fout << std::fixed << _funcionarios[i]->get_id() << " "
            << _funcionarios[i]->get_nome() << " R$" << std::setprecision(2)
            << _funcionarios[i]->get_gastoMensal() << " "
            << _funcionarios[i]->get_gastoProporcional() << "% \n";
    }
    fout << std::fixed << std::setprecision(2) << "Gasto mensal total: R$" << _gastoMensalTotal << '\n';
    fout << std::fixed << std::setprecision(2) << "Gasto medio por funcionario: R$" << _gastoMensalTotal/(double)Funcionario::get_numFuncionario() << '\n';

    fout.close();
} 

void Relatorio::calculaProporcionalFuncionario(){
    for(int i=0; i<_funcionarios.size(); i++){
        _funcionarios[i]->set_gastoProporcional(_gastoMensalTotal); 
    }
}