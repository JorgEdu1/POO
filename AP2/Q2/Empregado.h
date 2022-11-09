#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
using namespace std;
class Empregado{
private:
    string nome;
public:
    Empregado(string nome);
    string getNome();
    void setNome(string nome);
    virtual float calcularSalario() = 0;
    virtual void print();
};
#endif