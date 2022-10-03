#include <iostream>
#include <string>
using namespace std;
#include "SuperHeroi.h"

int main(){

    string nome, sexo, idade, lingua, etnia, nomeInseto, codinome, trauma, poderes;
    bool venenoso, alado, ferrao;
    cout << "Nome: " << endl;
    getline(cin, nome);
    cout << "Sexo: " << endl;
    getline(cin, sexo);
    cout << "Idade: " << endl;
    getline(cin, idade);
    cout << "Lingua: " << endl;
    getline(cin, lingua);
    cout << "Etnia: " << endl;
    getline(cin, etnia);
    cout << "Nome de Inseto: " << endl;
    getline(cin, nomeInseto);
    cout << "Venenoso?(0 para nao e 1 para sim): " << endl;
    cin >> venenoso;
    cout << "Alado?(0 para nao e 1 para sim): " << endl;
    cin >> alado;
    cout << "Ferrao?(0 para nao e 1 para sim): " << endl;
    cin >> ferrao;
    cin.ignore();
    cout << "Codinome: " << endl;
    getline(cin, codinome);
    cout << "Trauma: " << endl;
    getline(cin, trauma);
    cout << "Poderes: " << endl;
    getline(cin, poderes);

    SuperHeroi heroi(nome, sexo, idade, lingua, etnia, nomeInseto, venenoso, alado, ferrao, codinome, trauma, poderes);

    heroi.printSuperHeroi();

    return 0;
}