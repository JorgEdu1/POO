#include <iostream>
using namespace std;
#include "Conta.h"

Conta::Conta(double saldoini){
    if(saldoini < 0){
        saldo = 0;
        cout << "Erro: Saldo negativo, definido como 0" << endl;
    }
    else{
        saldo = saldoini;
        cout << "Saldo: " << getSaldo() << endl;
    }    
}

void Conta::setSaldo(double saldo) { this->saldo = saldo; } 
double Conta::getSaldo() { return saldo; }

void Conta::Credito(double valor){
    Conta::setSaldo(saldo + valor);
    cout << "Novo saldo: " << getSaldo() << endl;
}
void Conta::Debito(double valor){
    if(saldo - valor < 0){
        cout << "Erro: Nao possui saldo suficiente" << endl;    
    }
    else {
        Conta::setSaldo(saldo - valor);
        cout << "Novo saldo: " << getSaldo() << endl;
    }
}