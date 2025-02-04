#include "pankkitili.h"

Pankkitili::Pankkitili() {
    omistaja = " ";
    saldo = 0;
}

Pankkitili::Pankkitili(string nimi) {
    omistaja = nimi;
}

bool Pankkitili::withdraw(double summa)
{
    if (summa < 0){
        cout << "Et voi nostaa summia, jotka ovat alle 0 " << endl;
        return false;
    }
    else if (summa > saldo){
        cout << "Saldossasi ei ole tarpeeksi rahaa " << endl;
        return false;
    }

    else {
        saldo -= summa;
        cout << omistaja << " Pankkitili:" << " Nosto " << summa << " onnistui" << endl;
        return true;
    }
}

bool Pankkitili::deposit(double summa)
{
    if (summa < 0){
        cout << "Et voi tallettaa summia, jotka ovat alle 0 " << endl;
        return false;
    }

    else {
        saldo += summa;
        cout << omistaja << " Pankkitili: " << "Talletus " << summa << " tehty" << endl;
        return true;
    }
}

double Pankkitili::getBalance()
{
    return saldo;
}
