#include <iostream>
#include <iomanip>
#include <vector>
#include <exception>

#include "Excecaosoma.h"
#include "ExcecaoAcimaDeX.h"

Excecaosoma::Excecaosoma()
{
    int x;

    std::cout << "Digite o seu numero limite: ";
    std::cin >> x;
    if(x <= 0 || x > 100){
        throw std::out_of_range("O seu valor limite deve estar entre 1 e 100");  
    }

    _x = x;
    total = 0.0;

    int n;
    std::cout << "Quantos numeros compoem a sua soma?" << std::endl;
    std::cin >> n;
    if(n <= 0){
        throw std::out_of_range("A funcao nao aceita numeros menores ou iguais a 0");  
    }

    int aux;
    std::cout << "Digite o seus n numeros: ";
    for(int i=0; i<n; i++){
        std::cin >> aux;

        if(aux <= 0){
          throw std::out_of_range("A funcao nao aceita numeros menores ou iguais a 0"); 
        }else {
            _n.push_back(aux);
        }
    }
}

Excecaosoma::~Excecaosoma() {
    _n.clear();
}

void Excecaosoma::somaValores() {
    bool teste;
    int cont = 0;
    for(int i=0; i<_n.size(); i++){
        total += _n[i];
        if(total > _x){
            teste = true; 
            total -= _n[i];
            break;
        }
        cont++;
    }
    
    std::cout << "Valor da soma: " << total << std:: endl;
    std::cout << "Quantidade de numeros somados: " << cont << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Media: " << total / (double)cont << std::endl;

    if(teste){
        throw  ExcecaoAcimaDeX();
    }
}
    
