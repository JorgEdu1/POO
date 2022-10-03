
#ifndef PACOTEDOISDIAS_H
#include "Pacote.h"
#define PACOTEDOISDIAS_H
#include <iostream>
using namespace std;

class PacoteDoisDias: protected Pacote{
    private:
        float taxaAdicional;
    public:
        PacoteDoisDias(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente,double peso, double precoKG, float taxaAdicional);
        void setTaxaadicional(float taxaAdicional);
        float getTaxaadicional();
        float calculaCustodoisdiasTaxa(float peso, float precoKG, float taxaAdicional);
};
#endif