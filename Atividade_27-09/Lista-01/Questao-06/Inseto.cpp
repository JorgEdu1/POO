#include <iostream>
#include <string>
using namespace std;
#include "Inseto.h"

Inseto::Inseto(string nomeInseto, bool venenoso, bool alado, bool ferrao){
    setNomeInseto(nomeInseto);
    setVenenoso(venenoso);
    setAlado(alado);
    setFerrao(ferrao);
}

void Inseto::setNomeInseto(string nomeInseto){ this->nomeInseto = nomeInseto; }
void Inseto::setVenenoso(bool venenoso){ this->venenoso = venenoso; }
void Inseto::setAlado(bool alado){ this->alado = alado; }
void Inseto::setFerrao(bool ferrao){ this->ferrao = ferrao; }
string Inseto::getNomeInseto(){ return this->nomeInseto; }
bool Inseto::getVenenoso(){ return this->venenoso; }
bool Inseto::getAlado(){ return this->alado; }
bool Inseto::getFerrao(){ return this->ferrao; }
void Inseto::printInseto(){
    cout << "Nome Inseto: " << getNomeInseto() << endl;
    cout << "Venenoso: " << getVenenoso() << endl;
    cout << "Alado: " << getAlado() << endl;
    cout << "Ferrao: " << getFerrao() << endl;
}