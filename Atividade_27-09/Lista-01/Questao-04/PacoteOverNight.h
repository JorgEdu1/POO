#ifndef PACOTEOVERNIGHT_H
#define PACOTEOVERNIGHT_H
#include <iostream>
#include "Pacote.h"
using namespace std;

class PacoteOverNight: protected Pacote{

    private:
        double taxaAdicional;

    public:
        PacoteOverNight(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente,double peso, double precoKG, double taxaAdicional);
        void setTaxaadicional(double taxaAdicional);
        double getTaxaadicional();
        double calculaCustoTaxaadicional(double peso, double precoKG, double taxaAdicional);
};
#endif