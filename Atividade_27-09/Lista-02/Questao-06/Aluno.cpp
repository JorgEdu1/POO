#include <iostream>
#include <string>
using namespace std;
#include "Aluno.h"

Aluno::Aluno(string nome, string serie, string grau){
    setNome(nome);
    setSerie(serie);
    setGrau(grau);
}
void Aluno::setNome(string nome){
    this->nome = nome;
}
string Aluno::getNome(){
    return this->nome;
}
void Aluno::setSerie(string serie){
    this->serie = serie;
}
string Aluno::getSerie(){
    return this->serie;
}
void Aluno::setGrau(string grau){
    this->grau = grau;
}
string Aluno::getGrau(){
    return this->grau;
}
void Aluno::print(){
    cout << "Nome: " << this->nome << endl;
    cout << "Serie: " << this->serie << endl;
    cout << "Grau: " << this->grau << endl;
}
