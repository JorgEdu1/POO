#ifndef DIVIDEBYEXCEPTION_H
#define DIVIDEBYEXCEPTION_
#include <iostream>
#include <stdexcept>
using namespace std;

class DivideByZeroException: public runtime_error{
    public:
    DivideByZeroException(): runtime_error("Divide by zero exception"){}
};
#endif