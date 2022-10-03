#include <iostream>
#include "Tempo.h"
using namespace std;

int main(){
    int h, m, s;
    cin >> h >> m >> s;
    Tempo *a = new Tempo();
    Tempo *b = new Tempo(h,m,s);
    cin >> h >> m >> s;
    Tempo *c = new Tempo(h,m,s);

    cout << "Objeto A(inicializado com 0 pelo construtor): "; a->print();
    cout << "Objeto B(inicializado por parametros): "; b->print();
    cout << "Objeto C(inicializado por parametros): "; c->print();

    Tempo *auxB = new Tempo(b->getHoras(),b->getMinutos(), b->getSegundos());
    /*questao pede para que subtraia b-c, porem, farei auxialiares para nao perder os valores originais de b e c nessas contas, pois alguns
    metodos iram guardar o valor da conta no proprio objeto.*/
    cout << "Subtracao de B-C: "; b->subTempo(c->getHoras(),c->getMinutos(),c->getSegundos()); b->print();
    *b = *auxB;
    Tempo *auxC = new Tempo(c->getHoras(),c->getMinutos(), c->getSegundos());
    cout << "Soma de B+C pelo metodo normal: ";
    c->sumTempo(b->getHoras(),b->getMinutos(),b->getSegundos()); c->print();
    *c = *auxC;
    cout << "Soma de B+C pelo metodo sobrecarregado: "; *b = b->sumTempo(*c); b->print();
    return 0;
}