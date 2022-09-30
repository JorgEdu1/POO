#include <iostream>
using namespace std;

class Data{

    private:
        int mes;
        int dia;
        int ano;

    public:

        Data(int mes, int dia, int ano){
        
            setMes(mes);
            setDia(dia);
            setAno(ano);

        }
        void setMes(int mes) { 
            
            if(mes >= 0 && mes <= 12){
                this->mes = mes;
            }else{
                cout << "Error: Invalid value for mes = " << mes << endl;
            }
            
        } 
        int getMes() { 
            
            if(this->mes >= 0 && this->mes <= 12){
                return this->mes;
            }else{
                cout << "Error: Invalid value for mes(Reset value) = " << mes << endl;
            }

        }
        void setDia(int dia) { 

           if(this->mes <= 7){

                if(this->mes == 2){
                    if(dia >= 0 && dia <= 28){
                        this->dia = dia;
                    }else{
                    cout << "Error: Invalid value for dia = " << dia << endl;
                    }
                }else if(this->mes % 2 == 0){
                    
                    if(dia >= 0 && dia <= 30){
                        this->dia = dia;
                    }else{
                        cout << "Error: Invalid value for dia = " << dia << endl;
                    }

                }else{

                    if(dia >= 0 && dia <= 31){
                        this->dia = dia;
                    }else{
                    cout << "Error: Invalid value for dia = " << dia << endl;
                    }

                }
           }else if(this->mes > 7){

                if(this->mes % 2 == 0){
                    
                    if(dia >= 0 && dia <= 31){
                        this->dia = dia;
                    }else{
                        cout << "Error: Invalid value for dia = " << dia << endl;
                    }

                }else{

                    if(dia >= 0 && dia <= 30){
                        this->dia = dia;
                    }else{
                    cout << "Error: Invalid value for dia = " << dia << endl;
                    }

                }

           }

        } 
        int getDia() {

            if(this->dia >= 0 && this->dia <= 31){
                return this->dia;
            }else{
                cout << "Error: Invalid value for dia(Reset value) = " << this->dia << endl;
            }

        }
        void setAno(int ano) {

            if(ano >= 0 && ano <= 2022){//calendario valido ate 2022
                this->ano = ano;
            }else{
                cout << "Error: Invalid value for ano = " << ano << endl;
            }

        } 
        int getAno() {

            if(this->ano >= 0 && this->ano <= 2022){
                return this->ano;
            }else{
                cout << "Error: Invalid value for ano(Reset value) = " << this->ano << endl;
            }

        }
        void print(){

            cout << getDia() << "/" << getMes() << "/" << getAno() << endl;

        }
        void calculaDia(int numMes){

            //calculo quantos dias apartir do dia 01/01/do ano dado ate o mes N que vai ser passado como parametro
            int somaDias = 0;
            int backupMes = numMes;
            numMes = 1;
            while(numMes < backupMes){
               if(numMes <= 7){

                if(numMes == 2){
                   somaDias += 28;
                   numMes++;
                }else if(numMes % 2 == 0){
                    
                    somaDias += 30;
                    numMes++;

                }else{

                    somaDias += 31;
                    numMes++;

                }
           }else if(numMes > 7){

                if(numMes % 2 == 0){
                    
                    somaDias += 31;
                    numMes++;

                }else{

                    somaDias += 30;
                    numMes++;

                }

           }

        }
        cout << somaDias << endl;
        }
        void calculaDia(string mesLetras){

            //calculo quantos dias apartir do dia 01/01/do ano dado ate o mes N que vai ser passado como parametro SOBRECARREGADA
            int numMes;
            if(mesLetras == "janeiro"){
                numMes = 1;
            }else if(mesLetras == "fevereiro"){
                numMes = 2;
            }else if(mesLetras == "marco"){
                numMes = 3;
            }else if(mesLetras == "abril"){
                numMes = 4;
            }else if(mesLetras == "maio"){
                numMes = 5;
            }else if(mesLetras == "junho"){
                numMes = 6;
            }else if(mesLetras == "julho"){
                numMes = 7;
            }else if(mesLetras == "agosto"){
                numMes = 8;
            }else if(mesLetras == "setembro"){
                numMes = 9;
            }else if(mesLetras == "outubro"){
                numMes = 10;
            }else if(mesLetras == "novembro"){
                numMes = 11;
            }else if(mesLetras == "dezembro"){
                numMes = 12;
            }

            int somaDias = 0;
            int backupMes = numMes;
            numMes = 1;
            while(numMes < backupMes){
               if(numMes <= 7){

                if(numMes == 2){
                   somaDias += 28;
                   numMes++;
                }else if(numMes % 2 == 0){
                    
                    somaDias += 30;
                    numMes++;

                }else{

                    somaDias += 31;
                    numMes++;

                }
           }else if(numMes > 7){

                if(numMes % 2 == 0){
                    
                    somaDias += 31;
                    numMes++;

                }else{

                    somaDias += 30;
                    numMes++;

                }

           }

        }
        cout << somaDias << endl;
        }
        


};