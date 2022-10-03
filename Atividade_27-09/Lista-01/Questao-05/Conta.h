#ifndef CONTA_H
#define CONTA_H
#include <iostream>
using namespace std;

class Conta{
    private:
        double saldo;
    public:
        Conta();
        Conta(double);
        void credito(double);
        void debito(double);
        void setSaldo(double);
        double getSaldo();
};
#endif