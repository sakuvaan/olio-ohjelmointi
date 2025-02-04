#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class pankkitili
{
public:
    pankkitili();
    pankkitili(string pinkoodi);

    int getSaldo() const;
    void setSaldo(int newSaldo);


private:
    int saldo;
    string tilinro;
    string pinkoodi;

};

#endif // PANKKITILI_H
