#include <iostream>
#include <string>
#include "carroPasseio.h"
using namespace std;

int main(){
    string peso, vel_max,preco,numCilindros,potencia,modelo,cor;
    

    
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



    cout << "Digite o modelo: ";
    cin >>modelo;


    cout << "Digite a cor: ";
    cin >>cor;


    CarroPasseio *novo = new CarroPasseio(peso,vel_max,preco,potencia,numCilindros,modelo,cor);
    
    cout << endl << endl;

    novo -> printcarroPasseio();
    
    
    
    
    
}