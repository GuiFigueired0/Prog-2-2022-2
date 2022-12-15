#include <iostream>
#include <fstream>
#include <string>

#include "Maze.h"

int main(){
    Maze* maze = new Maze();
    std::string arqEntrada;
    char c;

    while(1){
        std::cout << "Digite o nome do arquivo de entrada(.txt): " << std::endl;
        std::cin >> arqEntrada;

        if(maze->leArquivo(arqEntrada)){
            maze->imprimeLabirinto();
            std::cout << "O labirinto ";
            (maze->verificaSaidaLabirinto(2, 1)) ? std::cout << "" : std::cout << "NAO ";
            std::cout << "possui saida!" << std::endl;
        }

        std::cout << "Voce deseja fazer a leitura de outro arquivo(y/n): ";
        std::cin >> c;
        if(c == 'n') break;
    }
    delete maze;    

    return 0;
}