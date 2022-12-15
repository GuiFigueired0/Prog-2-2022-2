#ifndef TURMA_H
#define TURMA_H 

#include <vector> 
#include "Aluno.h"

class Turma
{
public:
    std::vector<Aluno*> _alunos;

    ~Turma();

    void leituraDados();
    void imprime();

};

#endif