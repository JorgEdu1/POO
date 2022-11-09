#ifndef EMPREGADOHORISTA_H
#define EMPREGADOHORISTA_H
#include "Empregado.h"
class EmpregadoHorista : public Empregado{
    private:
        int Horas;
        float valorHora;
    public:
        EmpregadoHorista(string nome, int Horas, float valorHora);
        void setHoras(int Horas);
        int getHoras();
        void setValorHora(float valorHora);
        float getValorHora();
        float calcularSalario();
        void print();
};
#endif