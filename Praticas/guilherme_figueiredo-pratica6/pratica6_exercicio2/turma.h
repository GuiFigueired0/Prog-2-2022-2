#ifndef INF112_TURMA_H
#define INF112_TURMA_H

#include <string>

class Turma
{
private:
    std::string _codigo;
    int _ano;

public:
    Turma(std::string a, int b);
    ~Turma();

    std::string get_codigo();
    int get_ano();
    void set_codigo(std::string);
    void set_ano(int);
};

#endif
