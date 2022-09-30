#include <iostream>
#include <string>
using namespace std;
#include "Estacionamento.h"

Estacionamento::Estacionamento(){
    setPlaca("0");
    setModelo("0");
}
Estacionamento::Estacionamento(string pla, string mod){
    setPlaca(pla);
    setModelo(mod);
}
void Estacionamento::setPlaca(string placa){
    this->placa=placa;
}
void Estacionamento::setModelo(string modelo){
    this->modelo=modelo;
}
string Estacionamento::getPlaca(){
    return this->placa;
}
string Estacionamento::getModelo(){
    return this->modelo;
}
void Estacionamento::printEstacionamento(){
    cout << "Modelo: " << getModelo() << endl;
    cout << "Placa: " << getPlaca() << endl;
}
float Estacionamento::calculaPreco(int horas){
    return horas * 1.5;
}