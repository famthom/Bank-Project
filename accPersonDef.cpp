#include <iostream>
#include <string>

#include "accPerson.h"

void accPerson::print() const {
    person::print();
    std::cout << "\nNumero da conta: " << num;
    std::cout << "\nSaldo: " << saldo;
}

void accPerson::setInfo(int n, int p) {
    num = n;
    pass = p;
}

void accPerson::setSaldo(double s) {
    saldo = s;
}

int accPerson::getNumber() const {
    return num;
}

int accPerson::getPass() const {
    return pass;
}

double accPerson::getSaldo() const {
    return saldo;
}

accPerson::accPerson(double s, int p, int n,
                     std::string nome, std::string sobrenome) : person(nome, sobrenome) {
    saldo = s;
    pass = p;
    num = n;
}
