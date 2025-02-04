#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class Pankkitili
{
public:
    Pankkitili();
    Pankkitili(string nimi);

    virtual bool withdraw(double summa);
    virtual bool deposit(double summa);
    double getBalance();

protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
