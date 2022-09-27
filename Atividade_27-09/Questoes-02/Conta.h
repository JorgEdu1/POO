#include <iostream>

using namespace std;

class Conta{
private:
    double saldo;

public:
    Conta(double saudoini);
    
    void setSaldo(double saldo);
    double getSaldo();

    void Credito(double valor);
    void Debito(double valor);

};