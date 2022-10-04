#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex(double real, double imaginary){
    this->real = real;
    this->imaginary = imaginary;
}
Complex Complex::operator+(const Complex &operand2) const{
    return Complex(this->real + operand2.real, this->imaginary + operand2.imaginary);
}
Complex Complex::operator-(const Complex &operand2) const{
    return Complex(this->real - operand2.real, this->imaginary - operand2.imaginary);
}
Complex Complex::operator*(const Complex &operand2) const{
    return Complex(this->real * operand2.real, this->imaginary * operand2.imaginary);
}
bool Complex::operator!=(const Complex &operand2) const{
    if((this->real != operand2.real) && (this->imaginary != operand2.imaginary)){
        return true;
    }else{
        return false;
    }
} 
bool Complex::operator==(const Complex &operand2) const{
    if((this->real == operand2.real) && (this->imaginary == operand2.imaginary)){
        return true;
    }else{
        return false;
    }
}
void Complex::print() const{
    cout << '(' << this->real << ", " << this->imaginary << ')' << endl;
}