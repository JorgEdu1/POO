#include <iostream>
#include "Numeroracional.h"
using namespace std;

int main() {
    int deno, nume;
    cin >> deno >> nume;
    Numeroracional fracao1(deno, nume);
    cin >> deno >> nume;
    Numeroracional fracao2(deno, nume);
    cout << "soma: ";
    Numeroracional auxsoma(fracao1+fracao2);
    auxsoma.print();

    cout << "subtracao: ";
    Numeroracional auxsub(fracao1-fracao2);
    auxsub.print();

    cout << "multiplicacao: ";
    Numeroracional auxmulti(fracao1*fracao2);
    auxmulti.print();

    cout << "divisao: ";
    Numeroracional auxdivi(fracao1/fracao2);
    auxdivi.print();

    cout << "a fracao menor entre a 1 e a 2: ";
    Numeroracional auxmenor(fracao1<=fracao2);
    auxmenor.print();

    cout << "a fracao maior entre a 1 e a 2: ";
    Numeroracional auxmaior(fracao1>=fracao2);
    auxmaior.print();

    cout << "A fracao 1 e diferente da fracao 2?(1 para sim e 0 para nao): " << endl;
    bool checkDiferente(fracao1!=fracao2);
    cout << checkDiferente << endl;

    cout << "A fracao 1 e igual a fracao 2?(1 para sim e 0 para nao): " << endl;
    bool checkIgual(fracao1==fracao2);
    cout << checkIgual << endl;

    return 0;
}