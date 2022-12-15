#ifndef ALUNO_H
#define ALUNO_H

#include <string>

class Aluno
{
private:
    int _matricula; 
    std::string _nome; 
    double _media;
    

public:
    Aluno(int matricula, std::string nome, double nome1, double nome2);
    ~Aluno();

    int get_matricula();
    std::string get_nome(); 
    double get_media();
    void matriculaCriptografada();
};


#endif