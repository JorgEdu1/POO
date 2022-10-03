#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include <iostream>
#include "Conta.h"
using namespace std;

class ContaPoupanca: public Conta{
    private:
        double rendimento;
    public:
        ContaPoupanca();
        ContaPoupanca(double, double);
        void setRendimento(double);
        double getRendimento();
        void calculaRendimento();
};
#endif