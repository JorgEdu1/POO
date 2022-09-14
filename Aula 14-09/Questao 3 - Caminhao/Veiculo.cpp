#include <iostream>
#include <string>
using namespace std;

#include "Veiculo.h"

Veiculo::Veiculo(){}

    Veiculo::Veiculo(string peso, string vel_max, string preco){

        this->peso = peso;
        this->vel_max = vel_max;
        this->preco = preco;

    }
    string Veiculo::getPeso(){

        return peso;

    }
    void Veiculo::setPeso(string novo){

        this->peso = novo;

    }
    string Veiculo::getVel_max(){

        return vel_max;

    }
    void Veiculo::setVel_max(string novo){

        this->vel_max = novo;

    }
    string Veiculo::getPreco(){

        return preco;

    }
    void Veiculo::setPreco(string novo){

        this->preco = novo;

    }
    void Veiculo::printVeiculo(){

        cout << "O peso do veiculo eh: " << getPeso() << endl;
        cout << "A velocidade maxima do veiculo eh: " << getVel_max() << endl;
        cout << "O preco do veiculo eh: " << getPreco() << endl;

    }