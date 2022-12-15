#include <iostream> 
#include <vector> 
#include <string> 
#include <algorithm>

#include "Aluno.h"
#include "Turma.h"

class MaiorNota{
public: 
    bool operator()(Aluno* a, Aluno* b){
        return a->get_media() > b->get_media();
    }
};

int main(){
    Turma turma;
    MaiorNota teste;
    
    turma.leituraDados(); 
    sort(turma._alunos.begin(), turma._alunos.end(), teste);
    turma.imprime(); 
}