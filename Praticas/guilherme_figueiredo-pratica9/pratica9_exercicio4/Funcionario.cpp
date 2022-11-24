#include <iostream>
#include <string> 

#include "Funcionario.h"

int Funcionario::_numFuncionario = 0;

Funcionario::Funcionario(std::string nome, double gastoMensal) :
    _id(++_numFuncionario), _nome(nome), _gastoMensal(gastoMensal) {}

Funcionario::~Funcionario() {}

int Funcionario::get_numFuncionario(){
    return _numFuncionario;
}

int Funcionario::get_id() {
    return _id;
}

std::string Funcionario::get_nome() {
    return _nome;
}

double Funcionario::get_gastoMensal(){
    return _gastoMensal;
}

double Funcionario::get_gastoProporcional(){
    return _gastoProporcional;
}

void Funcionario::set_gastoProporcional(double gastoTotal){
    _gastoProporcional = (_gastoMensal / gastoTotal) * 100;
}

