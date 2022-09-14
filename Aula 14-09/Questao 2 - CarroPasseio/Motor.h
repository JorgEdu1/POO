#include <iostream>
#include <string>
#include "Veiculo.h"

using namespace std;

class Motor: public Veiculo{
    public:
    Motor();
    Motor(string peso, string vel_max, string preco, string potencia, string numCilindros);

    //GETS;
    string getpotencia();
    string getnumCilindros();

    //SETS;
    void setpotencia(string potencia);
    void setnumCilindros(string numCilindros);

    //Print;
    void printMotor();

    private:
    string potencia;
    string numCilindros;

    

    protected:
};