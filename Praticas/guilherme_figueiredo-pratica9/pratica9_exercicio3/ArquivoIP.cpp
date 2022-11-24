#include <iostream>
#include <fstream>
#include <string> 
#include <vector> 

#include "ArquivoIP.h"

ArquivoIP::ArquivoIP() {}

ArquivoIP::~ArquivoIP() {
    _ipsValidos.clear();
    _ipsInvalidos.clear();
}

void ArquivoIP::leitura(std::ifstream &entrada, std::string nomeArq) {
    char ipCompleto[16];
    int x, y, z, w;
    char c;

    int cont = 0;
    while(!entrada.eof()){
        entrada >> x >> c >> y >> c >> z >> c >> w;

        if( (0 > x || x > 255) || (0 > y || y > 255) || (0 > z || z > 255) || (0 > w || w > 255) ){
            _numIpsInvalidos.insert(cont);
        }else {
            _numIpsValidos.insert(cont);
        }
        cont++;
    }
    entrada.close();

    entrada.open(nomeArq);
    for(int i=0; i<cont; i++){
        entrada.getline(ipCompleto, 16);
        if( _numIpsValidos.count(i)){
           _ipsValidos.push_back(ipCompleto);
           _numIpsValidos.erase(i);
        }else {
            _ipsInvalidos.push_back(ipCompleto);
           _numIpsInvalidos.erase(i);
        }
    }
}

void ArquivoIP::relatorio(std::ofstream &saida){
    saida << "[Enderecos validos:]" << '\n';
    for(int i=0; i<_ipsValidos.size(); i++){
        saida << _ipsValidos[i] << '\n';
    }
    saida << '\n';
    saida << "[Enderecos invalidos:]" << '\n';
    for(int i=0; i<_ipsInvalidos.size(); i++){
        saida << _ipsInvalidos[i] << '\n';
    }
}