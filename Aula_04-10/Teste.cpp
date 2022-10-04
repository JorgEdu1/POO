#include <iostream>
#include <string>
using namespace std; 

class Teste1{
    public:
        void funcao(int x){
            cout << "O valor de x: " << x << endl;
        }
        void funcao(double x){
            cout << "O valor de x: " << x << endl;
        }
        void funcao(int x, int y){
            cout << "O valor de x + y: " << x << endl;
        }
};

int main(){

    Teste1 t1;
    t1.funcao(2);
    t1.funcao(4.3);
    t1.funcao(3,2);

    return 0;
}