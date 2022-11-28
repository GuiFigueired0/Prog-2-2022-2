#include <iostream> 
#include <vector>
#include <string>

#include "PosicoesVetor.h"

int main(){
    std::string aux;
    int tam;
    
    while(true){
        std::cout << "Digite o tamanho do vetor: " << std::endl;
        try{
            std::cin >> aux;
            for(int i=0; i<aux.size(); i++){
                if(!isdigit(aux[i])) throw std::invalid_argument("O programa aceita apenas entrada do tipo inteiro");
            }
            break;
        } catch (std::invalid_argument &e){
            std::cerr << e.what() << std::endl;
            char c;
            std::cout << "Voce deseja tentar novamente? n/y" << std::endl;
            std::cin >> c;
            if(c == 'n'){
                exit(1);
            }
        }
    }

    tam = std::stoi(aux);

    PosicoesVetor v(tam);

    while(true){
        try{
            v.preencherValores();
            break;
            
        }catch (std::out_of_range &e){
            std::cerr << e.what() << std::endl;
            char c;
            std::cout << "Voce deseja tentar novamente? n/y" << std::endl;
            std::cin >> c;
            if(c == 'n'){
                exit(1);
            }
        } catch (std::invalid_argument &e){
            std::cerr << e.what() << std::endl;
            char c;
            std::cout << "Voce deseja tentar novamente? n/y" << std::endl;
            std::cin >> c;
            if(c == 'n'){
                exit(1);
            }
        }
    }

    v.imprimirValores();

    return 0;
} 