#include <iostream>
#include <vector>
#include <exception>
#include <typeinfo>
#include <string>

#include "PosicoesVetor.h"

PosicoesVetor::PosicoesVetor(int y) {
    _y = y;
    _v.resize(_y);
}

PosicoesVetor::~PosicoesVetor() {
    _v.clear();
}

int PosicoesVetor::get_y() {
    return _y;
}

void PosicoesVetor::preencherValores() {
    std::string a, b;
    int num, pos;

    std::cout << "Digite cada valor e sua posicao, respectivamente:" << std::endl;
    for(int i=0;i<get_y();i++){

        std::cin >> a >> b;

        for(int i=0; i<a.size(); i++){
            if(!isdigit(a[i])) throw std::invalid_argument("O valor a ser adicionado deve ser um numero inteiro");
        }

        for(int i=0; i<b.size(); i++){
            if(!isdigit(b[i])) throw std::invalid_argument("A posicao do vetor deve ser um numero inteiro");
        }

        num = std::stoi(a);
        pos = std::stoi(b);

        if(pos <= 0 || pos > _v.size()) throw std::out_of_range("Voce digitou uma posicao inexistente");
         
        _v[pos-1] = num;
    }
}

void PosicoesVetor::imprimirValores() {
    std::cout << "|---------------------------|" << std::endl;
    std::cout << "Vetor e suas posicoes:" << std::endl;
    for(int i=0; i<_v.size(); i++){
        std::cout << "Valor: " << _v[i] << "  Posicao: " << i+1 << std::endl;
    }
    std::cout << "|---------------------------|" << std::endl;
}