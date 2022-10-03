#include <iostream>
#include <string>
using namespace std;

class Estacionamento{
    private:
        string placa;
        string modelo;
    public:
        Estacionamento();
        Estacionamento(string, string);
        void setPlaca(string);
        void setModelo(string);
        string getPlaca();
        string getModelo();
        void printEstacionamento();
        float calculaPreco(int horas);
};
