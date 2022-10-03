#include <iostream>
#include "Data.h"
using namespace std; 
int main(){

    int mes, dia, ano;
    cin>>mes>>dia>>ano;

    Data *novo = new Data(mes, dia, ano);
    novo->print();
    novo->calculaDia(mes);
    string mesLetra;
    cin>>mesLetra;
    novo->calculaDia(mesLetra);

}