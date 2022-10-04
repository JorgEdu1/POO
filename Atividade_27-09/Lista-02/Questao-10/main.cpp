#include <iostream>
#include "Numeroracional.h"
using namespace std;

int main() {
    int deno, nume;
    cin >> deno >> nume;
    int intSum;
    cin >> intSum;
    Numeroracional fracao1(deno, nume);
    cout << "soma: ";
    Numeroracional auxsoma(fracao1+intSum);
    auxsoma.print();

    cout << "subtracao: ";
    Numeroracional auxsub(fracao1-intSum);
    auxsub.print();

    cout << "multiplicacao: ";
    Numeroracional auxmulti(fracao1*intSum);
    auxmulti.print();

    cout << "divisao: ";
    Numeroracional auxdivi(fracao1/intSum);
    auxdivi.print();

    return 0;
}