#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string> 
#include <vector> 

class Funcionario
{
private:
    static int _numFuncionario;
    int _id;
    std::string _nome;
    double _gastoMensal; 
    double _gastoProporcional;
public: 
    Funcionario(std::string nome, double gastoMensal);
    ~Funcionario();

    static int get_numFuncionario();
    int get_id();
    std::string get_nome();
    double get_gastoMensal(); 
    double get_gastoProporcional();
    void set_gastoProporcional(double gastoTotal);
};
#endif