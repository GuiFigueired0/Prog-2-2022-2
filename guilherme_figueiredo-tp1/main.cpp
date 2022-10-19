#include <iostream> 

#include "matrizQuadrada.h"

int main(){

    // cria as matrizes de forma dinamica
    MatrizQuadrada *m1 = new MatrizQuadrada (3);
    MatrizQuadrada *m2 = new MatrizQuadrada (3);
    MatrizQuadrada *m3 = new MatrizQuadrada (5);
    MatrizQuadrada *m4 = new MatrizQuadrada (3);
    MatrizQuadrada *m5 = new MatrizQuadrada (3);
    MatrizQuadrada *r = new MatrizQuadrada (3);


    std::cout << "Digite a sua matriz m1 de ordem " << m1->get_n() << ":" << std::endl;
    m1->leMatriz();

    m2->criaMatrizIdentidade();
    m3->criaMatrizIdentidade();

    std::cout << "Digite a sua matriz m4 de ordem " << m4->get_n() << ":" << std::endl;
    m4->leMatriz();

    std::cout << "Digite a sua matriz m5 de ordem " << m5->get_n() << ":" << std::endl;
    m5->leMatriz();
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "--- DADOS DO PROGRAMA ---" << std::endl;
    std::cout << std::endl;
    
    std::cout << "A matriz m1 e igual a:" << std::endl;
    m1->imprimeMatriz();
    std::cout << std::endl;

    std::cout << "A matriz m2 e igual a:" << std::endl;
    m2->imprimeMatriz();
    std::cout << std::endl;

    std::cout << "A matriz m3 e igual a:" << std::endl;
    m3->imprimeMatriz();
    std::cout << std::endl;

    std::cout << "A matriz m4 e igual a:" << std::endl;
    m4->imprimeMatriz();
    std::cout << std::endl;

    std::cout << "A matriz m5 e igual a:" << std::endl;
    m5->imprimeMatriz();
    std::cout << std::endl;

    std::cout << "A matriz trasposta da matriz m1 e igual a:" << std::endl;
    r->criaTransposta(m1);
    r->imprimeMatriz();
    std::cout << std::endl;

    std::cout << "A soma da matriz m1 com a matriz m2 e igual a:" << std::endl;
    r->soma(m1, m2);
    r->imprimeMatriz();
    std::cout << std::endl;

    std::cout << "A soma da matriz m1 com a matriz m3 e igual a:" << std::endl;
    r->soma(m1, m3);
    std::cout << std::endl;

    std::cout << "O produto da matriz m4 com a matriz m5 e igual a:" << std::endl;
    r->produto(m4, m5);
    r->imprimeMatriz();
    std::cout << std::endl;

    std::cout << "O produto da matriz m3 na matriz m5 e igual a:" << std::endl;
    r->produto(m3, m5);
    std::cout << std::endl;

    std::cout << "Comparacao entre as matrizes m1 e m2:" << std::endl;
    if(m1->compara(m2)){
        std::cout << "As matrizes m1 e m2 sao iguais!" << std::endl;
    } else{
        std::cout << "As matrizes m1 e m2 sao diferentes!" << std::endl;
    }
    std::cout << std::endl;

    std::cout << "Comparacao entre as matrizes m2 e m3:" << std::endl;
    if(m2->compara(m3)){
        std::cout << "As matrizes m2 e m3 sao iguais!" << std::endl;
    } else{
        std::cout << "As matrizes m2 e m3 sao diferentes!" << std::endl;
    }
    std::cout << std::endl;

    delete m1;
    delete m2;
    delete m3;
    delete m4;
    delete m5;

    return 0;
}