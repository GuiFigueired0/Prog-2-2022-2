#include <iostream> 

#include "Aluno.h"

Aluno::Aluno(int matricula, std::string nome, double nota1, double nota2)
{
    _matricula = matricula; 
    _nome = nome; 

    _media = (nota1 + nota2)/2.00;
}

Aluno::~Aluno() {}

int Aluno::get_matricula() {
    return _matricula;
}

double Aluno::get_media() {
    return _media;
}

std::string Aluno::get_nome() {
    return _nome;
}

void Aluno::matriculaCriptografada(){
    for(int i=3;i>=0;i--) std::cout << ( (_matricula & (1<<i)) == 0 ) ? 1 : 0;
}