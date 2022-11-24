#include <iostream>

#include "Excecaosoma.h"

int main(){
    
    while(true){
        try{
            Excecaosoma es;
            //es.somaValores();
            
        }catch (std::out_of_range &e){
            std::cerr << e.what() << std::endl;
            char c;
            std::cout << "Voce deseja tentar novamente? n/y" << std::endl;
            std::cin >> c;
            if(c == 'n'){
                break;
            }
        }
    }

    return 0;
}