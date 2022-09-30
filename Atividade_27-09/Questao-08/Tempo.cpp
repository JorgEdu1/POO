#include <iostream>
using namespace std;
#include "Tempo.h"

Tempo::Tempo(){
    setHoras(0);
    setMinutos(0);
    setSegundos(0);
}
Tempo::Tempo(int horas, int minutos, int segundos){
    setHoras(horas);
    setMinutos(minutos);
    setSegundos(segundos);
}
int Tempo::getHoras(){
    return this->horas;
}
int Tempo::getMinutos(){
    return this->minutos;
}
int Tempo::getSegundos(){
    return this->segundos;
}
void Tempo::setHoras(int horas){
    this->horas = horas;
}
void Tempo::setMinutos(int minutos){
    this->minutos = minutos;
}
void Tempo::setSegundos(int segundos){
    this->segundos = segundos;
}
void Tempo::print(){
    cout << getHoras() << ":" << getMinutos() << ":" << getSegundos() << endl;
}
void Tempo::sumTempo(int hr,int min,int seg){
    
    setHoras(getHoras() + hr);
    setMinutos(getMinutos() + min);
    setSegundos(getSegundos() + seg);
}
void Tempo::subTempo(int horas,int minutos, int segundos){
    setHoras(getHoras() - horas);
    setMinutos(getMinutos() - minutos);
    setSegundos(getSegundos() - segundos);
}
Tempo Tempo::sumTempo(Tempo teste){
    teste.setHoras(teste.getHoras() + this->getHoras());
    teste.setMinutos(teste.getMinutos() + this->getMinutos());
    teste.setSegundos(teste.getSegundos() + this->getSegundos());
    return teste;
}
int Tempo::subHora(int hr){
    return this->getHoras() - hr;
}
