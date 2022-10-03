#include <iostream>
#include "ContaCorrente.h"
using namespace std;

ContaCorrente::ContaCorrente():Conta(){setTaxa(0);}
ContaCorrente::ContaCorrente(double valorSaldo, double valorTaxa):Conta(valorSaldo){setTaxa(valorTaxa);}
void ContaCorrente::setTaxa(double valor){
    this->taxa = valor;
}
double ContaCorrente::getTaxa(){ return this->taxa; }
void ContaCorrente::creditoCorrente(double valor){
    valor -= getTaxa();
    credito(valor);
}
void ContaCorrente::debitoCorrente(double valor){
    valor += getTaxa();
    debito(valor);
}