#include <iostream>
#include <string> 
#include <fstream>
#include <exception>

#include "Maze.h"

// CONSTRUTOR E DESTRUTOR
// eu optei por nao passar o tamanho da matriz no construtor
//porque dessa forma eu posso usar um mesmo objeto para ler
//varios arquivos e ir adaptando o seu tamanho a cada matriz.
Maze::Maze() { _labirinto = nullptr; }

Maze::~Maze(){
    for(int i=0; i<_n; i++) delete[] _labirinto[i];
    delete[] _labirinto;
}

//-- --
bool Maze::leArquivo(std::string nomeArq){
    std::ifstream entrada;

    entrada.open(nomeArq);
    // verifica se consegue abrir o arquivo de entrada 
    try{
        if(!entrada.is_open()) throw std::invalid_argument("Falha na abertura do arquivo");
    } catch (std::invalid_argument &e){
        std::cerr << e.what() << std::endl;
        entrada.close();
        return false;
    } 

    // deletando uma matriz que pode ter ficado de lixo
    if(_labirinto != nullptr){
        for(int i=0; i<_n; i++) {
            if(_labirinto[i] != nullptr) delete[] _labirinto[i];
        }
        delete[] _labirinto;
    }

    // ordem da matriz 
    entrada >> _n;
    // colocando uma borda para ficar mais facil de percorrer e
    //verificar a matriz, alem de previnir erros de segmentacao.
    _n += 2; 
    
    // criando a matriz 
    _labirinto = new std::pair<int, bool>* [_n];
    for(int i=0; i<_n; i++){
        _labirinto[i] = new std::pair<int, bool> [_n];
    }

    // preenchendo a matriz
    for(int i=0; i<_n; i++){
        for(int j=0; j<_n; j++){
            // colocando parede nas bordas 
            if(i==0 || j==0 || i==_n-1 || j==_n-1){
                _labirinto[i][j].first = 1;
                _labirinto[i][j].second = true;
            }else {
                entrada >> _labirinto[i][j].first;
                (_labirinto[i][j].first == 1) ? _labirinto[i][j].second = true : _labirinto[i][j].second = false;
            }
        }
    }
    entrada.close();
    return true;
}

void Maze::imprimeLabirinto(){
    // eu comeco em os indices com 1 e vou até _n -1 
    //porque as bordas estao preenchidas com parede.
    for(int i=1; i<_n-1; i++){
        for(int j=1; j<_n-1; j++){
            std::cout << _labirinto[i][j].first << " ";
        }
        std::cout << std::endl;
    }
}

bool Maze::verificaSaidaLabirinto(int i, int j){
    // verifica se a posicao é a saida
    if(_labirinto[i][j].first == 7) return true;

    // verifica se a posicao é uma padere ou se ja foi visitada (evita loops)
    if(_labirinto[i][j].first == 1 || _labirinto[i][j].second) return false;

    // marca que visitou a posicao atual
    _labirinto[i][j].second = true;

    // chama a funcao para as posicoes vizinhas na matriz
    if(verificaSaidaLabirinto(i+1, j)) return true;
    if(verificaSaidaLabirinto(i, j+1)) return true;
    if(verificaSaidaLabirinto(i-1, j)) return true;
    if(verificaSaidaLabirinto(i, j-1)) return true;

    return false;
}

