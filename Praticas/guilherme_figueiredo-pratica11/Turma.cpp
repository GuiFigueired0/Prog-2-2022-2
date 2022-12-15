#include <iostream> 
#include <vector> 
#include <algorithm>

#include "Turma.h"

Turma::~Turma() {}

void Turma::leituraDados(){
    int mat;
    std::string nom;
    double  n1, n2; 

    while(true){
        std::cin >> mat;
        if(mat == -1) break;
     
        std::cin.ignore();
        std::cin >> nom >> n1 >> n2;

        Aluno* x = new Aluno(mat, nom, n1, n2);
        _alunos.push_back(x);
    }
    
}

void Turma::imprime(){
    for(int i=0; i<_alunos.size(); i++){
        _alunos[i]->matriculaCriptografada(); 
        std::cout << " - " << _alunos[i]->get_nome();
        std::cout << " - " << _alunos[i]->get_media() << std::endl;
    }
}