//Bibliotecas
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

    //Classe

class Membros{

public:

    Membros(int tp);
    
    string getNome();
    void setNome(string nome);
    
    string getOcupacao();
    void setOcupacao(string ocupacao);
    
    string getEmail();
    void setEmail(string email);
    
    string getPalavraChave();
    void setPalavra(string palavraChave);
    
    int getIdade();
    void setIdade(int idade);

    char getSexo();
    void setSexo(char sexo);

    void imprimir();
    int tp;

private:

    string nome;
    string ocupacao;
    string email;
    string palavraChave;
    int idade;
    char sexo;

};

Membros::Membros(int tp){

    //Construtor

    this->tp = tp;
    if(tp == 1){

        this->nome = "Juliete";
        this->ocupacao = "Professor";
        this->email = "professor@gmail.com";
        this->palavraChave = "cuscuz123";
        this->idade = 50;
        sexo = 'F';

    }else if(tp == 2){

        this->nome = "Joao";
        this->ocupacao = "Tecnico";
        this->email = "tecnico@gmail.com";
        this->palavraChave = "informatica123";
        this->idade = 25;
        sexo = 'M';

    }else if(tp == 3){

        this->nome = "Augusto";
        this->ocupacao = "Aluno";
        this->email = "Aluno@gmail.com";
        this->palavraChave = "aluno123";
        this->idade = 16;
        sexo = 'M';

    }

}

    //Getters e Setters

string Membros::getNome(){

    return nome;

}

void Membros::setNome(string nome){

    this->nome = nome;

}
    
string Membros::getOcupacao(){
      
    return ocupacao;
      
}
void Membros::setOcupacao(string ocupacao){

    this->ocupacao = ocupacao;
      
}
    
string Membros::getEmail(){
      
    return email;
      
}
void Membros::setEmail(string email){

    this->email = email;
      
}
    
string Membros::getPalavraChave(){
      
    return palavraChave;
      
}
void Membros::setPalavra(string palavraChave){

    this->palavraChave = palavraChave;
      
}
    
int Membros::getIdade(){
      
    return idade;
      
}
void Membros::setIdade(int idade){

    this->idade = idade;
      
}

char Membros::getSexo(){
      
    return sexo;
      
}
void Membros::setSexo(char sexo){

    this->sexo = sexo;
      
}
void Membros::imprimir(){

    cout << "Nome:" << nome << endl;
    cout << "Ocupação:" << ocupacao << endl;
    cout << "Email:" << email << endl;
    cout << "Palavra Chave:" << palavraChave << endl;
    cout << "Idade:" << idade << endl;
    cout << "Sexo:" << sexo << endl;
}



int main(){

    //Main

    int tp;
    tp = 1;
    Membros *objeto1 = new Membros(tp);
    tp = 2;
    Membros *objeto2 = new Membros(tp);
    tp = 3;
    Membros *objeto3 = new Membros(tp);

    objeto1->imprimir();
    cout << "=============================================" << endl;
    objeto2->imprimir();
    cout << "=============================================" << endl;
    objeto3->imprimir();
    cout << "=============================================" << endl;

    return 0;
}