#include <iostream>
using namespace std;
#include "Conta.h"

int main(){
    Conta *a = new Conta(12304.23);
    a->Credito(100);
    a->Debito(13000);
    cout << "==============================" << endl;
    Conta *b = new Conta(-2);
    b->Credito(15000);
    b->Debito(5000);
}