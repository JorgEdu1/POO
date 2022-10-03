#include <iostream>
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
using namespace std;

int main(){
    //lendo informação para os constutores
    cout << "Digite o valor de saldo de sua nova conta poupanca: " << endl;
    double saldo;
    cin >> saldo;
    cout << "Digite o seu rendimento: " << endl;
    double rendimento;
    cin >> rendimento;
    //criando objeto da conta poupanca e calculando rendimento
    ContaPoupanca contaP(saldo, rendimento);
    contaP.calculaRendimento();
    //lendo informação para os constutores
    cout << "Digite o valor de saldo de sua nova conta corrente: " << endl;
    cin >> saldo;
    cout << "Digite a taxa da sua conta: " << endl;
    double taxa;
    cin >> taxa;
    //criando objeto da conta corrente e calculando debito e credito com a taxa
    ContaCorrente contaC(saldo, taxa);
    //credito:
    cout << "Quanto voce quer depositar: " << endl;
    double deposito;
    cin >> deposito;
    contaC.creditoCorrente(deposito);
    cout << "Seu novo saldo: " << contaC.getSaldo() << endl;
    //debito:
    cout << "Quanto voce quer debitar: " << endl;
    double debito;
    cin >> debito;
    contaC.debitoCorrente(debito);
    cout << "Seu novo saldo: " << contaC.getSaldo() << endl;

    return 0;
}