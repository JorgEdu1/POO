#include <iostream>
#include <string>
using namespace std;
class Aluno
{
private:
    string nome;
    string serie;
    string grau;
public:
    Aluno(string, string, string);
    void setNome(string nome);
    string getNome();
    void setSerie(string serie);
    string getSerie();
    void setGrau(string grau);
    string getGrau();
    void print();

};
    
