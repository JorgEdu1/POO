#include "EmpregadoHorista.h"
#include <iostream>
using namespace std;
EmpregadoHorista::EmpregadoHorista(string nome, int Horas, float valorHora) : Empregado(nome){
    this->Horas = Horas;
    this->valorHora = valorHora;
}
void EmpregadoHorista::setHoras(int Horas){
    this->Horas = Horas;
}
int EmpregadoHorista::getHoras(){
    return Horas;
}
void EmpregadoHorista::setValorHora(float valorHora){
    this->valorHora = valorHora;
}
float EmpregadoHorista::getValorHora(){
    return valorHora;
}
float EmpregadoHorista::calcularSalario(){
    if(Horas <= 40){
        return Horas * valorHora;
    }
    return (40 / valorHora) + ((Horas - 40) * (valorHora * 1.5));
}
void EmpregadoHorista::print(){
    cout << "Nome: " << getNome() << endl;
    cout << "Salario: " << calcularSalario() << endl;
}