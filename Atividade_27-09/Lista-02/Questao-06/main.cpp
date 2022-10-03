#include <iostream>
#include <string>
using namespace std;
#include "Aluno.h"

int main(){

    string nome, serie, grau;

    for (int i = 0; i < 15; i++){
        cin >> nome;
        cin.ignore();
        cin >> serie;
        cin.ignore();
        cin >> grau;
        cin.ignore();
        Aluno *aluno = new Aluno(nome, serie, grau);
        aluno->print();
    }
    return 0;
}