#include <iostream>
#include <string>
#include "Motor.h"

using namespace std;

class CarroPasseio:public Motor,Veiculo{
    public:
        CarroPasseio(string peso, string vel_max, string preco, string potencia, string numCilindros, string modelo, string cor);

        //GETS;
        string getmodelo();
        string getcor();

        //SETS;
        void setmodelo(string modelo);
        void setcor(string cor);

        void printcarroPasseio();
 
    private:
        string modelo;
        string cor;
};