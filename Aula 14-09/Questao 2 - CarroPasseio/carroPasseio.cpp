#include <iostream>
#include <string>
#include "carroPasseio.h"

using namespace std;

//Construtor;
CarroPasseio::CarroPasseio(string peso, string vel_max, string preco, string potencia, string numCilindros, string modelo, string cor):Motor(peso, vel_max, preco, potencia, numCilindros){
    this->modelo = modelo;
    this->cor = cor;
}


//GETS;
string CarroPasseio::getmodelo() {
    return modelo;
}
string CarroPasseio::getcor(){
    return cor;
}

//SETS;
void CarroPasseio::setmodelo(string modelo) {
    this->modelo = modelo;
}
void CarroPasseio::setcor(string cor) {
    this->cor = cor;
}

//Print

void CarroPasseio::printcarroPasseio(){
    Motor::printMotor();
    cout << "O modelo do carro de passeio eh: " << getmodelo() << endl;
    cout << "A cor do carro de passeio eh: " << getcor() << endl;
    
}
