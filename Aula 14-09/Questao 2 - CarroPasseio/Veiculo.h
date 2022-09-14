#include <iostream>
#include <string>
using namespace std;

class Veiculo{

private:

    string peso;
    string vel_max;
    string preco;

public:

    Veiculo();
    Veiculo(string, string, string);
    string getPeso();
    void setPeso(string novo);
    string getVel_max();
    void setVel_max(string novo);
    string getPreco();
    void setPreco(string novo);

    void printVeiculo();

};