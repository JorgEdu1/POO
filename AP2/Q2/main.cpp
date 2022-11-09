#include "Empregado.h"
#include "EmpregadoAssalariado.h"
#include "EmpregadoHorista.h"
#include "DivideByException.h"
#include <iostream>
using namespace std;

double quotient(int numerator, int denominator){
    if(denominator == 0){
        throw DivideByZeroException();
    }
    return static_cast< double >(numerator)/denominator;
}
//Professor falou que nao precisa cair na excessao, entao fiz assim, implementei igual o PDF da AP2.
int main(){
    Empregado *empregados[3];
    empregados[0] = new EmpregadoHorista("Joao", 10, 10);
    empregados[1] = new EmpregadoAssalariado("Maria", 1000);
    empregados[2] = new EmpregadoHorista("Jose", 20, 20);
    for(int i = 0; i < 3; i++){
        empregados[i]->print();
    }
    return 0;
}