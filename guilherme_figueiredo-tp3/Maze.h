#ifndef MAZE_H
#define MAZE_H

#include <algorithm>
#include <fstream>
#include <string>

class Maze
{
private:
    int _n;                             // ordem da matriz
    std::pair<int, bool>** _labirinto;  
// O int representa as paredes (1), saido (7) e caminhos livres (0)
// e o bool é um marcador pra saber se já passados por um caminho na 
//verificacao ou se ele é inacessivel (poda) - serve para evitar loops

public:
    Maze();
    ~Maze();

    bool leArquivo(std::string nomeArq);
    void imprimeLabirinto();    
    bool verificaSaidaLabirinto(int i, int j);
};

#endif