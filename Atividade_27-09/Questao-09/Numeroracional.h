#include <iostream>
using namespace std;

class Numeroracional{

    private:
        int numerador;
        int denominador;
    public:
        Numeroracional(int, int);
        Numeroracional operator+(Numeroracional);
        Numeroracional operator-(Numeroracional);
        Numeroracional operator*(Numeroracional);
        Numeroracional operator/(Numeroracional);
        Numeroracional operator<(Numeroracional);
        Numeroracional operator>(Numeroracional);
        bool operator!=(Numeroracional);
        bool operator==(Numeroracional);
        void print();
};