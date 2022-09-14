#include <iostream>
#include <string>
#include "Motor.h"
using namespace std;

class Caminhao:public Motor,Veiculo{

private:

    string tonelada;
    string alt_max;
    string comprimento;

public:

    Caminhao();
    Caminhao(string peso, string vel_max, string preco, string potencia, string numCilindros, string tonelada, string alt_max, string comprimento);
    string getTonelada();
    void setTonelada(string novo);
    string getAlt_max();
    void setAlt_max(string novo);
    string getComprimento();
    void setComprimento(string novo);

    void printCaminhao();

};