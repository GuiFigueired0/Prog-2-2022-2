#ifndef POSICOES_VETOR__H
#define POSICOES_VETOR__H

#include <vector>

class PosicoesVetor
{
private:
    int _y; //numero de posicoes do vetor 
    std::vector<int> _v; // vetor de inteiro 
public:
    PosicoesVetor(int y);
    ~PosicoesVetor();

    int get_y();
    void preencherValores();
    void imprimirValores();
};

#endif