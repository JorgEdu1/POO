#ifndef PACOTE_H
#define PACOTE_H
#include <iostream>
using namespace std;

class Pacote{

    protected:
        string nomeDestinatario;
        string enderecoDestinatario;
        string cidadeDestinatario;
        string estadoDestinatario;
        string cepDestinatario;

        string nomeRemetente;
        string enderecoRemetente;
        string cidadeRemetente;
        string estadoRemetente;
        string cepRemetente;

        double peso;
        double precoKG;

    public:
        Pacote(string nomeDestinatario, string enderecoDestinatario, string cidadeDestinatario, string estadoDestinatario, string cepDestinatario, string nomeRemetente, string enderecoRemetente, string cidadeRemetente, string estadoRemetente, string cepRemetente,double peso, double precoKG);

        void setnomeDestinatario(string nomeDestinatario);
        void setenderecoDestinatario(string enderecoDestinatario);
        void setcidadeDestinario(string cidadeDestinatario);
        void setestadoDestinatario(string estadoDestinatario);
        void setcepDestinatario(string cepDestinatario);

        void setnomeRemetente(string nomeRemetente);
        void setenderecoRemetente(string enderecoRemetente);
        void setcidadeRemetente(string cidadeRemetente);
        void setestadoRemetente(string estadoRemetente);
        void setcepRemetente(string cepRemetente);

        void setPeso(float peso);
        void setPrecokg(float precoKG);

        double calculaCusto();
};
#endif