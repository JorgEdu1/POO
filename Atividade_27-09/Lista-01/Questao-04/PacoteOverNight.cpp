#include <iostream>
#include <string>
#include "PacoteOverNight.h"
using namespace std;

PacoteOverNight::PacoteOverNight(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente,double peso, double precoKG, double taxaAdicional):Pacote(nomeDestinatario, enderecoDestinatario, cidadeDestinatario, estadoDestinatario, cepDestinatario, nomeRemetente, enderecoRemetente, cidadeRemetente, estadoRemetente, cepRemetente, peso, precoKG){
    setTaxaadicional(taxaAdicional);
}
void PacoteOverNight::setTaxaadicional(double taxaAdicional){
    this->taxaAdicional = taxaAdicional;
}
double PacoteOverNight::getTaxaadicional(){
    return this->taxaAdicional;
}
double PacoteOverNight::calculaCustoTaxaadicional(double peso, double precoKG, double taxaAdicional){
    return (peso * precoKG) + taxaAdicional;
}