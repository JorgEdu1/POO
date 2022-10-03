#ifndef SUPERHEROI_H
#define SUPERHEROI_H
#include <iostream>
#include <string>
using namespace std;
#include "Humano.h"
#include "Inseto.h"

class SuperHeroi: public Humano, public Inseto{
    private:
        string codinome;
        string trauma;
        string poderes;
    public:
        SuperHeroi(string nome, string sexo, string idade, string lingua, string etnia, string nomeInseto, bool venenoso, bool alado, bool ferrao, string codinome, string trauma, string poderes);
        void setCodinome(string codinome);
        void setTrauma(string trauma);
        void setPoderes(string poderes);
        string getCodinome();
        string getTrauma();
        string getPoderes();
        void printSuperHeroi();
};
#endif