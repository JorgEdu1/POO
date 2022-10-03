#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include <iostream>
#include "Conta.h"
using namespace std;

class ContaCorrente: public Conta{
    private:
        double taxa;
    public:
        ContaCorrente();
        ContaCorrente(double, double);
        void setTaxa(double);
        double getTaxa();
        void creditoCorrente(double);
        void debitoCorrente(double);
};
#endif