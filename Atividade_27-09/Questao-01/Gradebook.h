#include <iostream>
#include <string>
using namespace std;
//apenas testes.

class GradeBook{

    private:
    string courseName;
    string teacherName;//atributo nome professor

    public:
    GradeBook(string name_disci, string name_teacher){
        //construtor foi atualizado para inicializar o courseName e teacherName
        setCoursename(name_disci);
        setTeachername(name_teacher);

    }
    void setCoursename(string name){

        this->courseName = name;

    }
    string getCoursename(){

        return this->courseName;

    }
    void displayMessage(){

        //o print foi atualizado para printar os dois atributos ditos
        cout << "Welcome to the grade book\n" << getCoursename() << "!" << endl;
        cout << "Teacher name:\n" << getTeachername() << "!" << endl;

    }
    string getTeachername(){
        //criado o get para o atributo nome professor 1/2
        return this->teacherName;

    }
    void setTeachername(string name){
        //criado o set para o atributo nome professor 2/2
        this->teacherName = name;

    }

};