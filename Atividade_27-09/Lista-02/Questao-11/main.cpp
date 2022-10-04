#include <iostream>
using namespace std;
#include "Complex.h"

int main(){

    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);

    x.print();
    y.print();
    z.print();

    Complex soma(y+z);
    cout << "Soma: " << endl;
    soma.print();

    Complex sub(y-z);
    cout << "Subtracao: " << endl;
    sub.print();

    Complex multi(y*z);
    cout << "Multiplicacao: " << endl;
    multi.print();

    return 0;
}