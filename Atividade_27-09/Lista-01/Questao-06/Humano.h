#ifndef HUMANO_H
#define HUMANO_H
#include <iostream>
#include <string>
using namespace std;

class Humano{
    private:
        string nome;
        string sexo;
        string idade;
        string lingua;
        string etnia;
    public:
        Humano(string nome, string sexo, string idade, string lingua, string etnia);
        void setNome(string nome);
        void setSexo(string sexo);
        void setIdade(string idade);
        void setLingua(string lingua);
        void setEtnia(string etnia);
        string getNome();
        string getSexo();
        string getIdade();
        string getLingua();
        string getEtnia();
        void printHumano();
};
#endif