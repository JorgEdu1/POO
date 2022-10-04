#include <iostream>
using namespace std;
#include "Numeroracional.h"

Numeroracional::Numeroracional(int n, int d){
    numerador = n;
    if(d > 0)
        denominador = d;
    else
        denominador = 1;
}
Numeroracional Numeroracional::operator+(Numeroracional aux){
    Numeroracional soma  = Numeroracional(1,1);
    if(this->denominador == aux.denominador){
        soma.numerador = this->numerador + aux.numerador;
        soma.denominador = this->denominador;
    }else{
        soma.numerador = (this->numerador*aux.denominador) + (this->denominador * aux.numerador);
        soma.denominador = this->denominador*aux.denominador;
    }
    return soma;
}
Numeroracional Numeroracional::operator-(Numeroracional aux){
    Numeroracional sub  = Numeroracional(1,1);
    if(this->denominador == aux.denominador){
        sub.numerador = this->numerador - aux.numerador;
        sub.denominador = this->denominador;
    }else{
        sub.numerador = (this->numerador*aux.denominador) - (this->denominador * aux.numerador);
        sub.denominador = this->denominador*aux.denominador;
    }
    return sub;
}
Numeroracional Numeroracional::operator*(Numeroracional aux){
    Numeroracional multi = Numeroracional(1,1);
    multi.numerador = this->numerador*aux.numerador;
    multi.denominador = this->denominador*aux.denominador;
    return multi;
}
Numeroracional Numeroracional::operator/(Numeroracional aux){
    Numeroracional divisao = Numeroracional(1,1);
    divisao.numerador = this->numerador*aux.denominador;
    divisao.denominador = this->denominador*aux.numerador;
    return divisao;
}
Numeroracional Numeroracional::operator<=(Numeroracional aux){
    float auxNumerador = this->numerador;
    float auxDenominador = this->denominador;
    float valorThis = auxNumerador/auxDenominador;
    auxNumerador = aux.numerador;
    auxDenominador = aux.denominador;
    float valorAux = auxNumerador/auxDenominador;
    Numeroracional eu(this->numerador,this->denominador);
    if(valorThis <= valorAux){
        return eu;
    }else{
        return aux;
    }
}
Numeroracional Numeroracional::operator>=(Numeroracional aux){
    float auxNumerador = this->numerador;
    float auxDenominador = this->denominador;
    float valorThis = auxNumerador/auxDenominador;
    auxNumerador = aux.numerador;
    auxDenominador = aux.denominador;
    float valorAux = auxNumerador/auxDenominador;
    Numeroracional eu(this->numerador,this->denominador);
    if(valorThis >= valorAux){
        return eu;
    }else{
        return aux;
    }
}
bool Numeroracional::operator!=(Numeroracional aux){
    float auxNumerador = this->numerador;
    float auxDenominador = this->denominador;
    float valorThis = auxNumerador/auxDenominador;
    auxNumerador = aux.numerador;
    auxDenominador = aux.denominador;
    float valorAux = auxNumerador/auxDenominador;
    if(valorThis != valorAux){
        return true;
    }else{
        return false;
    }
}
bool Numeroracional::operator==(Numeroracional aux){
    float auxNumerador = this->numerador;
    float auxDenominador = this->denominador;
    float valorThis = auxNumerador/auxDenominador;
    auxNumerador = aux.numerador;
    auxDenominador = aux.denominador;
    float valorAux = auxNumerador/auxDenominador;
    if(valorThis == valorAux){
        return true;
    }else{
        return false;
    }
}
void Numeroracional::print(){
    cout << "Numerador: " << this->numerador << endl;
    cout << "Denominador: " << this->denominador << endl;
}