#include <iostream> 

#include "matrizQuadrada.h"

MatrizQuadrada::MatrizQuadrada(int num)
{
    _n = num; 
    _matriz = new int *[_n];
    for(int i=0; i<_n; i++){
        _matriz[i] = new int[_n];
    }
}

MatrizQuadrada::~MatrizQuadrada()
{
    for(int i=0; i<_n; i++){
        delete[] _matriz[i];
    }
    delete[] _matriz;
}

void MatrizQuadrada::leMatriz(){
    for(int i=0; i<_n; i++){
        for(int j=0; j<_n; j++){
            std::cin >> _matriz[i][j];
        }
    }
}

void MatrizQuadrada::criaMatrizIdentidade(){
    for(int i=0; i<_n; i++){
        for(int j=0; j<_n; j++){
            if(i==j){
                _matriz[i][j] = 1;
            }else {
                _matriz[i][j] = 0;
            }
        }
    }
}

void MatrizQuadrada::criaTransposta(MatrizQuadrada *other){

    for(int i=0; i<_n; i++){
        for(int j=0; j<_n; j++){
            _matriz[i][j] = 0;
            _matriz[i][j] = other->_matriz[j][i];
        }
    }

}

void MatrizQuadrada::soma(MatrizQuadrada *a, MatrizQuadrada *b){

    if(a->_n != b->_n){
        std::cout << "Nao foi possivel realizar a soma porque as matrizes apresentam tamanhos diferentes" << std::endl;
        return;
    }


    for(int i=0; i<_n; i++){
        for(int j=0; j<_n; j++){
            _matriz[i][j] = 0;
            _matriz[i][j] = a->_matriz[i][j] + b->_matriz[i][j];
        }
    }

}


void MatrizQuadrada::produto(MatrizQuadrada *a, MatrizQuadrada *b){
    
    if(a->_n != b->_n){
        std::cout << "Nao foi possivel realizar o produto porque as matrizes apresentam tamanhos diferentes" << std::endl;
        return;
    }

    

    for(int i=0; i<get_n(); i++){
        for(int j=0; j<get_n(); j++){

            _matriz[i][j] = 0;

            for(int k=0; k<get_n(); k++){
                _matriz[i][j] += a->_matriz[i][k] * b->_matriz[k][j];
            }

        }
    }

}

bool MatrizQuadrada::compara(MatrizQuadrada *other){

    if(_n != other->get_n()){
        std::cout << "As matrizes apresentam tamanhos diferentes. Logo:" << std::endl;
        return false;
        std::cout << "Passou aqui" << std::endl;
    }

    for(int i=0; i<_n; i++){
        for(int j=0; j<_n; j++){

            if(_matriz[i][j] != other->_matriz[i][j]){
                return false;
            }

        }
    }

    return true;
}

void MatrizQuadrada::imprimeMatriz(){
    for(int i=0; i<_n; i++){
        for(int j=0; j<_n; j++){
            std::cout << _matriz[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int MatrizQuadrada::get_n(){
    return _n;
}
