#include <iostream>
#include <string>
#include "Gradebook.h"
using namespace std;

int main(){

    string nome_curso, nome_prof;
    cin >> nome_curso;
    cin.ignore();
    cin >> nome_prof;

    GradeBook *gradeBook = new GradeBook(nome_curso, nome_prof);

    gradeBook->displayMessage();

}