#include <iostream>
#include <string>
#include "Caminhao.h"
using namespace std;

int main(){

    string peso, vel_max,preco,numCilindros,potencia, tonelada, alt_max, comprimento;
    

    
    cout << "Ola, voce chegou no sistema de veiculos. Antes de comecar gostaria de pedir para que todas as suas entradas nao sejam separadas por espacos (exemplo:Fiat Uno, use: FiatUno)!" << endl;

    cout << "Digite o peso do veiculo: ";
    cin >> peso;


    cout << "Digite a velocidade maxima: ";
    cin >>vel_max;



    cout << "Digite o preco: ";
    cin >>preco;


    cout << "Digite o numero de cilindros: ";
    cin >>numCilindros;


    cout << "Digite a potencia: ";
    cin >> potencia;



    cout << "Digite a tonelada: ";
    cin >> tonelada;


    cout << "Digite a altura maxima: ";
    cin >>alt_max;

    cout << "Digite o comprimento: ";
    cin >>comprimento;

    Caminhao *novo = new Caminhao(peso,vel_max,preco,potencia,numCilindros,tonelada,alt_max, comprimento);
    
    cout << endl << endl;

    novo -> printCaminhao();
    
    
    
    
    
}