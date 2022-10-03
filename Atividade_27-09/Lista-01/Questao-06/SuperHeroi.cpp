#include <iostream>
#include <string>
#include "SuperHeroi.h"
using namespace std;

SuperHeroi::SuperHeroi(string nome, string sexo, string idade, string lingua, string etnia, string nomeInseto, bool venenoso, bool alado, bool ferrao, string codinome, string trauma, string poderes):
Humano(nome, sexo, idade, lingua, etnia), Inseto(nomeInseto, venenoso, alado, ferrao){
    setCodinome(codinome);
    setTrauma(trauma);
    setPoderes(poderes);
}
void SuperHeroi::setCodinome(string codinome) { this->codinome = codinome; }
void SuperHeroi::setTrauma(string trauma) { this->trauma = trauma; }
void SuperHeroi::setPoderes(string poderes) { this->poderes = poderes; }
string SuperHeroi::getCodinome() { return this->codinome; }
string SuperHeroi::getTrauma(){ return this->trauma; }
string SuperHeroi::getPoderes() { return this->poderes; }
void SuperHeroi::printSuperHeroi() {
    printHumano();
    printInseto();
    cout << "Codinome: " << getCodinome() << endl;
    cout << "Trauma: " << getTrauma() << endl;
    cout << "Poderes: " << getPoderes() << endl;
}
    
