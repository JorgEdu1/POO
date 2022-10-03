#include <iostream>
#include <string>
#include "PacoteDoisDias.h"
using namespace std;

PacoteDoisDias::PacoteDoisDias(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente,double peso, double precoKG, float taxaAdicional):Pacote(nomeDestinatario, enderecoDestinatario, cidadeDestinatario, estadoDestinatario, cepDestinatario, nomeRemetente, enderecoRemetente, cidadeRemetente, estadoRemetente, cepRemetente, peso, precoKG){
    setTaxaadicional(taxaAdicional);
}
void PacoteDoisDias::setTaxaadicional(float taxaAdicional){
    this->taxaAdicional = taxaAdicional;
}
float PacoteDoisDias::getTaxaadicional(){
    return this->taxaAdicional;
}
float PacoteDoisDias::calculaCustodoisdiasTaxa(float peso, float precoKG, float taxaAdicional){
    return (peso * precoKG) + taxaAdicional;
}