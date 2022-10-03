#include <iostream>
using namespace std;

class Tempo{

    private:
        int horas;
        int minutos;
        int segundos;
    public:
        Tempo();
        Tempo(int horas, int minutos, int segundos);
        int getHoras();
        int getMinutos();
        int getSegundos();
        void setHoras(int horas);
        void setMinutos(int minutos);
        void setSegundos(int segundos);
        void print();
        void sumTempo(int,int,int);
        void subTempo(int,int,int);
        Tempo sumTempo(Tempo);
        int subHora(int);
};