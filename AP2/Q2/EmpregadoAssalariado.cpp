#include "EmpregadoAssalariado.h"
#include <iostream>
using namespace std;
EmpregadoAssalariado::EmpregadoAssalariado(string nome, float salario) : Empregado(nome){
    this->salario = salario;
}
void EmpregadoAssalariado::setSalario(float salario){
    this->salario = salario;
}
float EmpregadoAssalariado::getSalario(){
    return salario;
}
float EmpregadoAssalariado::calcularSalario(){
    return salario;
}
void EmpregadoAssalariado::print(){
    cout << "Nome: " << getNome() << endl;
    cout << "Salario: " << calcularSalario() << endl;
}