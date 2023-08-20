#include <iostream>
#include <string>

#include "bankSys.h"

void bankSys::deposit(double v, accPerson& acc) {
    acc.setSaldo(v + acc.getSaldo());
}

void bankSys::saque(double v, accPerson& acc) {
    if(v >= acc.getSaldo())
        acc.setSaldo(acc.getSaldo() - v);
    else
        std::cout << "\nSaldo insuficiente.";
}


bool bankSys::transacao(double v, accPerson& acc1, accPerson& acc2) {
    if(acc1.getSaldo() >= v) {
        saque(v, acc1);
        deposit(v, acc2);
        return true;
    } else {
        std::cout << "\nCredito insuficiente.";
        return false;
    }
}

void extrato(accPerson& acc) {
    acc.print();
}

bool bankSys::checkpass(int& p, accPerson& acc) const {
    bool sucess = false;
    if(p == acc.getPass())
        sucess = true;
    return sucess;
}

bool bankSys::checkAcc(int& n, accPerson& acc) const {
    bool sucess = false;
    if(n == acc.getNumber())
        sucess = true;
    return sucess;
}

