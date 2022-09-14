#include <iostream>
#include <string>
#include "Caminhao.h"
using namespace std;

Caminhao::Caminhao(){}

    Caminhao::Caminhao(string peso, string vel_max, string preco, string potencia, string numCilindros, string tonelada, string alt_max, string comprimento):Motor(peso, vel_max, preco, potencia, numCilindros){

        this->tonelada = tonelada;
        this->alt_max = alt_max;
        this->comprimento = comprimento;

    }
    
    string Caminhao::getTonelada(){

        return tonelada;

    }
    void Caminhao::setTonelada(string novo){

        this->tonelada = novo;

    }
    string Caminhao::getAlt_max(){

        return alt_max;

    }
    void Caminhao::setAlt_max(string novo){

        this->alt_max = novo;

    }
    string Caminhao::getComprimento(){

        return comprimento;

    }
    void Caminhao::setComprimento(string novo){

        this->comprimento = novo;

    }
    void Caminhao::printCaminhao(){

        cout << "Quantidade de Toneladas: " << getTonelada() << endl;
        cout << "Altura maxima eh: " << getAlt_max() << endl;
        cout << "o Comprimento eh: " << getComprimento() << endl;
        Motor::printMotor();

    }