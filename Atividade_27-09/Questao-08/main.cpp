#include <iostream>
#include <string>
#include "Estacionamento.h"
#include "Tempo.h"
using namespace std;

int main(){
    cout << "Digite hora de entrada:" << endl;
    int hr, min, seg;
    cin >> hr >> min >> seg;
    cout << "Digite a placa e o modelo:" << endl;
    string placa, mod;
    cin >> placa;
    cin.ignore();
    cin >> mod;

    Estacionamento *carro1 = new Estacionamento(placa,mod);
    Tempo *hrEntrada = new Tempo(hr, min, seg);
    cout << "Digite hora de saida:" << endl;
    cin >> hr >> min >> seg;
    Tempo *hrSaida = new Tempo(hr, min, seg);
    float preco = carro1->calculaPreco(hrSaida->subHora(hrEntrada->getHoras()));
    carro1->printEstacionamento();
    cout << "Preco: " << preco << endl;

    return 0;
}