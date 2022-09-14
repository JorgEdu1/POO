#include <iostream>
#include <string>
#include "Motor.h"

using namespace std;

//Construtor;
Motor::Motor(){

}

Motor::Motor(string peso, string vel_max, string preco, string potencia, string numCilindros):Veiculo(peso,vel_max,preco){
    this->potencia = potencia;
    this->numCilindros = numCilindros;
}


//GETS;
string Motor::getpotencia(){
    return potencia;
}
string Motor::getnumCilindros(){
    return numCilindros;
}

//SETS;

void Motor::setpotencia(string potencia){
    this->potencia = potencia;
}
void Motor::setnumCilindros(string numCilindros){
    this->numCilindros = numCilindros;
}

//Print
void Motor::printMotor(){
    printVeiculo();
    cout << "A potencia do motor eh: " << getpotencia() << endl;
    cout << "O numero de cilindos do motor eh: " << getnumCilindros() << endl;
    
}