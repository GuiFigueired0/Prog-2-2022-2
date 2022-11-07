#include <iostream>

#include "estudante.h"
#include "pessoa.h"
#include "turma.h"

int main()
{
  Pessoa pessoa("Julio Reis.");
  Turma prog2("INF 112", 2022);
  Estudante estudante("Jane Doe", 20180101, prog2);

  std::cout << "O seu estudante possui os seguintes atributos:" << std::endl;
  std::cout << "Nome: " << estudante.get_nome() << std::endl;
  std::cout << "Matricula: " << estudante.get_matricula() << std::endl;
  std::cout << "Ele estudou na turma: " << estudante.get_turma().get_codigo() << std::endl;
  std::cout << "no ano de: " << estudante.get_turma().get_ano() << std::endl;

  return 0;
}