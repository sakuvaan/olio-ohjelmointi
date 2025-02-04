#include "luottotili.h"

Luottotili::Luottotili() {

}

Luottotili::Luottotili(string nimi, double lr)
    : Pankkitili(nimi)
{
    luottoraja = lr;
}

bool Luottotili::deposit(double summa)
{
    if(summa < 0){
        cout << "Et voi talletta summia, jotka ovat alle 0" << endl;
        return false;
    }
    else if (saldo + summa > 0){
        cout << "Et voi tallettaa luottotilille rahaa niin,"
                "että saldo menisi yli 0" << endl;
        return false;
    }

    else {
        saldo += summa;
        cout << "Luottotili: " << "Talletus" << summa << " onnistui" << endl;
        return true;
    }
}

bool Luottotili::withdraw(double summa)
{
    if(summa < 0){
        cout << "Et voi nostaa summia, jotka ovat alle 0" << endl;
        return false;
    }

    else if (saldo - summa < luottoraja){
        cout << "Nosto yrityksesi menee yli luottorajan" << endl;
        return false;
    }

    else {
        saldo -= summa;
        cout << "Luottotili: "<< "Nosto " << summa << " onnistui" << endl;
        return true;
    }
}
