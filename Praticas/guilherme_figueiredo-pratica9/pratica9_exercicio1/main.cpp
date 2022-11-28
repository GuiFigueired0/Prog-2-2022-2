#include <iostream>

#include "Excecaosoma.h"
#include "ExcecaoAcimaDeX.h"

int main(){
    
    while(true){
        try{
            Excecaosoma es;
            es.somaValores();
            break;
            
        }catch (std::out_of_range &e){
            std::cerr << e.what() << std::endl;
            char c;
            std::cout << "Voce deseja tentar novamente? n/y" << std::endl;
            std::cin >> c;
            if(c == 'n'){
                break;
            }
        }catch (ExcecaoAcimaDeX &e) {
            std::cerr << e.what() << std::endl;
            exit(1);
        }
    }

    return 0;
}