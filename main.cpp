/*
2023-05-10 01:10
Project bank system. I made this back some time, it's incredibly well made huh? Sure, this need more documentation, and
i don't fully know how to introduce the next features, for now i think i have to put the account saving system, but first
i'll do it separately, after that i increment here.
Seems a good future right here, i wounder if i can make a web page back-ended with cpp, i'll see later but first i have
to finish that tutorial.
*/

#include <iostream>
#include <string>

#include "bankSys.h"
#include "person.h"
#include "accPerson.h"


using namespace std;

int main()
{
    int choice, loop = 0;
    int senha = 1, number;
    string name, lastName;
    accPerson account, acc2;
    bankSys bank;
    while(loop == 0) {
        std::cout << "Login no sistema do banco #####.";
        std::cout << "\nEntre 1 para login, 2 para criação de conta, ou qualquer outro numero para sair do programa: ";
        std::cin >> choice;
        switch(choice) {
        case 1:
            std::cout << "Senha: ";
            std::cin >> senha;
            break;
        case 2:
            std::cout << "Digite um numero para sua conta: ";
            std::cin >> number;
            std::cout << "Digite uma senha para sua conta: ";
            std::cin >> senha;
            account.setInfo(number, senha);
            std::cout << "Digite seu nome: ";
            std::cin >> name;
            std::cout << "Digite seu sobrenome: ";
            std::cin >> lastName;
            account.setName(name, lastName);
            break;
        default:
            std::cout << "Finalizando o programa...";
            return 0;
        }

        if(bank.checkpass(senha, account) != true) {
            std::cout << "Senha incorreta, tente novamente. " << std::endl;
            continue;
        }
        else {
            loop = 1;
            while(loop == 1) {
                std::cout << "\nVoce deseja performar qual operacao? ";
                std::cout << "\nDeposito: 1";
                std::cout << "\nTirar extrato: 2";
                std::cout << "\nFazer transacao: 3";
                std::cout << "\nSair da conta: Qualquer numero." << std::endl;
                std::cin >> choice;
                switch(choice) {
                case 1:
                    std::cout << "\nDigite um valor para fazer o deposito: ";
                    double dep;
                    std::cin >> dep;
                    bank.deposit(dep, account);
                    break;
                case 2:
                    account.print();
                    break;
                case 3:
                    std::cout << "Digite o numero da conta que deseja fazer a transferencia:";
                    int numAcc;
                    std::cin >> numAcc;
                    //account.checkAcc();
                    std::cout << "Voce nao pode fazer isso ainda... Espere ate a proxima atualizacao." << std::endl;
                    std::cout << "\nDigite o valor da transferencia: ";
                    double tra;
                    std::cin >> tra;
                    if(bank.transacao(tra, account, acc2) == true) {
                        std::cout << "\nValor atual de sua conta: ";
                        account.getSaldo();
                        std::cout << "\nValor atual da conta transferida: ";
                        acc2.getSaldo();
                    }
                    break;
                default:
                    std::cout << "Saindo da conta... Aguarde..." << std::endl;
                    loop = 0;
                }
            }
        }
    }
        return 0;
}
