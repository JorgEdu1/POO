#ifndef INSETO_H
#define INSETO_H
#include <iostream>
#include <string>
using namespace std;

class Inseto{
    private:
        string nomeInseto;
        bool venenoso;
        bool alado;
        bool ferrao;
    public:
        Inseto(string, bool, bool, bool);
        void setNomeInseto(string);
        void setVenenoso(bool);
        void setAlado(bool);
        void setFerrao(bool);
        string getNomeInseto();
        bool getVenenoso();
        bool getAlado();
        bool getFerrao();
        void printInseto();
};
#endif