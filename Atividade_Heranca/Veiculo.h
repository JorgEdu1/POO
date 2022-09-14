#include <iostream>
#include <string>
using namespace std;

class Veiculo{

private:

    float peso;
    int vel_max;
    float preco;

public:

    Veiculo();
    Veiculo(float, int, float);
    float getPeso();
    void setPeso(float novo);
    int getVel_max();
    void setVel_max(int novo);
    float getPreco();
    void setPreco(float novo);

    void print();

}