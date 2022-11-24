#include <iostream>
#include <fstream>

#include "ArquivoIP.h"

int main(){
    ArquivoIP ips;

    std::string arqEntrada = "entrada.txt";
    std::ifstream fin;
    std::ofstream fout;

    fin.open(arqEntrada);
    if(!fin.is_open()){
        std::cerr << "Nao foi possivel a abertura do arquivo." << std::endl;
        std::cerr << "Verifique o nome do arquivo e tente novamente." << std::endl;
        exit(1);
    }

    fout.open("ips.txt");

    ips.leitura(fin, arqEntrada);
    ips.relatorio(fout);

    return 0;
}