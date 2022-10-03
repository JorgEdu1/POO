#include <iostream>
#include <string>
using namespace std;
#include "Humano.h"

Humano::Humano(string nome, string sexo, string idade, string lingua, string etnia){
    setNome(nome);
    setSexo(sexo);
    setIdade(idade);
    setLingua(lingua);
    setEtnia(etnia);
}
void Humano::setNome(string nome){ this->nome = nome; }
void Humano::setSexo(string sexo){ this->sexo = sexo; }
void Humano::setIdade(string idade){ this->idade = idade; }
void Humano::setLingua(string lingua){ this->lingua = lingua; }
void Humano::setEtnia(string etnia){ this->etnia = etnia; }
string Humano::getNome(){ return this->nome; }
string Humano::getSexo(){ return this->sexo; }
string Humano::getIdade(){ return this->idade; }
string Humano::getLingua(){ return this->lingua; }
string Humano::getEtnia(){ return this->etnia; }
void Humano::printHumano(){
    cout << "Nome: " << getNome() << endl;
    cout << "Sexo: " << getSexo() << endl;
    cout << "Idade: " << getIdade() << endl;
    cout << "Lingua: " << getLingua() << endl;
    cout << "Etnia: " << getEtnia() << endl;
}