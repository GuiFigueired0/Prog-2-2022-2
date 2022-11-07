#include "estudante.h"
#include "turma.h"

Estudante::Estudante(std::string nome, int matricula, Turma turma):
  Pessoa(nome), _matricula(matricula), _turma(turma){};

int Estudante::get_matricula() const
{
  return this->_matricula;
}

std::string Estudante::defina_meu_tipo() const
{
  return "Sou um estudante";
}

Turma Estudante::get_turma()
{
  return _turma;
}