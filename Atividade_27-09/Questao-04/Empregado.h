#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Empregado{

private:
    string nome;
    string sobrenome;
    float salario;

public:

    Empregado(string nome, string sobrenome, float salario){
        setNome(nome);
        setSobrenome(sobrenome);
        setSalario(salario);
    }
    void setNome(string nome) { this->nome = nome; } 
    string getNome() { return this->nome; }
    void setSobrenome(string sobrenome) { this->sobrenome = sobrenome; } 
    string getSobrenome() { return this->sobrenome; }
    void setSalario(float salario) { this->salario = salario; } 
    float getSalario() { return this->salario; }
    void salarioAnual(){

        cout << "===========================================================================================================" << endl;
        cout << "Salario anual do(a) " << getNome() << ": " << getSalario() * 12 << endl;
        cout << "===========================================================================================================" << endl;
    
    }
    void salarioAcrescimo(){

        cout << "===========================================================================================================" << endl;
        cout << "Salario anual acrescido com 10% do " << getNome() << ": " << (getSalario() * 12)+(getSalario()*12)/10 << endl;
        cout << "===========================================================================================================" << endl;

    }

};