#ifndef INF112_ESTUDANTE_H
#define INF112_ESTUDANTE_H

#include <string>

#include "pessoa.h"
#include "turma.h"

class Estudante : public Pessoa
{
private:
  int _matricula;
  Turma _turma;

public:
  Estudante(std::string, int, Turma);
  int get_matricula() const;
  virtual std::string defina_meu_tipo() const override;

  Turma get_turma();
  void set_turma(std::string, int);
};

#endif