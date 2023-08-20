#ifndef BANKSYS_H_INCLUDED
#define BANKSYS_H_INCLUDED

#include "accPerson.h"

class bankSys {
public:
    void deposit(double valor, accPerson&);
    void saque(double, accPerson&); //
    bool transacao(double, accPerson&, accPerson&); // make a change of money for another account
    void extrato(accPerson&);

    bool checkpass(int&, accPerson& acc) const; // Check the password
    bool checkAcc(int&, accPerson& acc) const; // Check the acc number, for changes.

    void numAccConvert(int);
private:
};

#endif // BANKSYS_H_INCLUDED
