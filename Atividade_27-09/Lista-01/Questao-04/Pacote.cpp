#include <iostream>
#include <string>
using namespace std;
#include "Pacote.h"

Pacote::Pacote(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente,double peso, double precoKG){
    if(peso <= 0 || precoKG <= 0){
        cout << "Erro" << endl;
    }else{
        setnomeDestinatario(nomeDestinatario);
        setenderecoDestinatario(enderecoDestinatario);
        setcidadeDestinario(cidadeDestinatario);
        setestadoDestinatario(estadoDestinatario);
        setcepDestinatario(cepDestinatario);
        setnomeRemetente(nomeRemetente);
        setenderecoRemetente(enderecoRemetente);
        setcidadeRemetente(cidadeRemetente);
        setestadoRemetente(estadoRemetente);
        setcepRemetente(cepRemetente);
        setPeso(peso);
        setPrecokg(precoKG);
    }
}
void Pacote::setnomeDestinatario(string nomeDestinatario){
    this->nomeDestinatario = nomeDestinatario;
}
void Pacote::setenderecoDestinatario(string enderecoDestinatario){
    this->enderecoDestinatario = enderecoDestinatario;
}
void Pacote::setcidadeDestinario(string cidadeDestinatario){
    this->cidadeDestinatario = cidadeDestinatario;
}
void Pacote::setestadoDestinatario(string estadoDestinatario){
    this->estadoDestinatario = estadoDestinatario;
}
void Pacote::setcepDestinatario(string cepDestinatario){
    this->cepDestinatario = cepDestinatario;
}
void Pacote::setnomeRemetente(string nomeRemetente){
    this->nomeRemetente = nomeRemetente;
}
void Pacote::setenderecoRemetente(string enderecoRemetente){
    this->enderecoRemetente = enderecoRemetente;
}
void Pacote::setcidadeRemetente(string cidadeRemetente){
    this->cidadeRemetente = cidadeRemetente;
}
void Pacote::setestadoRemetente(string estadoRemetente){
    this->estadoRemetente = estadoRemetente;
}
void Pacote::setcepRemetente(string cepRemetente){
    this->cepRemetente = cepRemetente;
}
void Pacote::setPeso(float peso){
    this->peso = peso;
}
void Pacote::setPrecokg(float precoKG){
    this->precoKG = precoKG;
}
double calculaCusto(double peso, double precoKG){
    return peso * precoKG;
} 