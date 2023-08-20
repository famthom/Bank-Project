#ifndef ACCPERSON_H_INCLUDED
#define ACCPERSON_H_INCLUDED

#include "person.h"

class accPerson: public person {
public:
    void print() const;
    void setInfo(int, int);
    void setSaldo(double);
    int getNumber() const;
    int getPass() const;
    double getSaldo() const;
    accPerson(double = 0, int = 0, int = 0, std::string = "", std::string = "");
private:
    double saldo;
    int num;
    int pass;
};

#endif // ACCPERSON_H_INCLUDED
