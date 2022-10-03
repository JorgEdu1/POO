#include <iostream>
#include "Conta.h"
using namespace std;

Conta::Conta(){ setSaldo(0);}
Conta::Conta(double valor){
    if(valor >= 0)
        setSaldo(valor);
    else
        cout << "Erro: Nao e possivel criar conta com saldo negativo!" << endl;
}
void Conta::credito(double valor){
    setSaldo(valor+this->getSaldo());
}
void Conta::debito(double valor){
    if(valor > this->saldo)
        cout << "Erro: SALDO INSUFICIENTE!" << endl;
    else
        setSaldo(this->getSaldo()-valor);
}
void Conta::setSaldo(double valor){ this->saldo = valor; }
double Conta::getSaldo(){ return this->saldo; }