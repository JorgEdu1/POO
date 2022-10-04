#include <iostream>
using namespace std;

class Teste2{
    private: 
        int numero;
    public:
        int operator+(Teste2 oi){
            return this->numero + oi.numero;
        }
        void setNumero(int numero) { this->numero = numero;}
};

int main(){
    Teste2 num1;
    Teste2 num2;
    num1.setNumero(3);
    num2.setNumero(2);
    cout << num1+num2;

    return 0;
}