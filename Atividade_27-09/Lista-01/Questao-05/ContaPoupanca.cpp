#include <iostream>
#include "ContaPoupanca.h"
using namespace std;

ContaPoupanca::ContaPoupanca():Conta(){setRendimento(0);}
ContaPoupanca::ContaPoupanca(double valorSaldo, double valorRendimento):Conta(valorSaldo){
    setRendimento(valorRendimento);
}
void ContaPoupanca::setRendimento(double valor){
    this->rendimento = valor;
}
double ContaPoupanca::getRendimento(){
    return this->rendimento;
}
void ContaPoupanca::calculaRendimento(){
    cout << "Com o rendimento de " << getRendimento() << " o seu saldo ficara igual a: " << getRendimento() * getSaldo() << endl;
}

