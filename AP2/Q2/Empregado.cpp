#include "Empregado.h"
#include <iostream>
using namespace std;
Empregado::Empregado(string nome){
    this->nome = nome;
}
string Empregado::getNome(){
    return nome;
}
void Empregado::setNome(string nome){
    this->nome = nome;
}
void Empregado::print(){
    cout << "Nome: " << nome << endl;
}
