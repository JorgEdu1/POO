#include <iostream>
#include <string>
using namespace std;
#include "Empregado.h"

int main(){

    string nome1, sobrenome1;
    float salario1;
    cout << "===========================================================================================================" << endl;
    cout << "Digite o seu Nome:" << endl;
    cin >> nome1;
    cout << "Digite o sobrenome:" << endl;
    cin >> sobrenome1;
    cout << "Digite o salario:" << endl;
    cin >> salario1;
cout << "===========================================================================================================" << endl;
    string nome2, sobrenome2;
    float salario2;
    cout << "===========================================================================================================" << endl;
    cout << "Digite o seu Nome:" << endl;
    cin >> nome2;
    cout << "Digite o sobrenome:" << endl;
    cin >> sobrenome2;
    cout << "Digite o salario:" << endl;
    cin >> salario2;
    cout << "===========================================================================================================" << endl;

    Empregado *novo1 = new Empregado(nome1, sobrenome1, salario1);
    Empregado *novo2 = new Empregado(nome2, sobrenome2, salario2);

    novo1->salarioAnual();
    novo2->salarioAnual();
    novo1->salarioAcrescimo();
    novo2->salarioAcrescimo();

}