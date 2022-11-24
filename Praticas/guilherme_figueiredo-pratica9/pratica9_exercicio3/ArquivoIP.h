#ifndef ARQUIVO_IP_H
#define ARQUIVO_IP_H

#include <string> 
#include <vector> 
#include <fstream>
#include <set>

class ArquivoIP
{
private:
    std::vector<std::string> _ipsValidos; 
    std::vector<std::string> _ipsInvalidos; 
    std::set<int> _numIpsValidos; 
    std::set<int> _numIpsInvalidos; 


public:
    ArquivoIP();
    ~ArquivoIP();

    void leitura(std::ifstream &entrada, std::string nomeArq);
    void relatorio(std::ofstream &entrada);
};

#endif