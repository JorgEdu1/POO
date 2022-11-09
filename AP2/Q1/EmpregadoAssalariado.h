#ifndef EMPREGADOASSALARIADO_H
#define EMPREGADOASSALARIADO_H
#include "Empregado.h"
class EmpregadoAssalariado : public Empregado{
private:
    float salario;
public:
    EmpregadoAssalariado(string nome, float salario);
    void setSalario(float salario);
    float getSalario();
    float calcularSalario();
    void print();
};
#endif