#include "asiakas.h"

asiakas::asiakas(string n, double lr)
    : kayttotili(n), luottotili(n, lr)
{
    nimi = n;
    cout << "Pankkitili luotu " << nimi << ":lle" << endl;
    cout << "Luottotili luotu " << nimi << ":lle, luottoraja " << lr << endl;
    cout << "Asiakkuus luotu " << nimi << endl;
    showSaldo();
    cout << endl;
}

string asiakas::getName()
{
    return nimi;
}

void asiakas::showSaldo()
{
    cout << "kayttotilin saldo on " << kayttotili.getBalance() << " Euroa" << endl;
    cout << "luottotilin saldo on " << luottotili.getBalance() << " Euroa" << endl;
}

bool asiakas::talletus(double summa)
{
        bool onnistuuko = kayttotili.deposit(summa);
    if (onnistuuko == false) {
        cout << "Meni pieleen" << endl;
    }
    return onnistuuko;
}

bool asiakas::nosto(double summa)
{
    bool onnistuuko = kayttotili.withdraw(summa);
    if(onnistuuko == false){
        cout << "Meni pieleen" << endl;
    }
    return onnistuuko;
}

bool asiakas::luotonMaksu(double summa)
{
    bool onnistuuko = luottotili.deposit(summa);
    if (onnistuuko == false) {
        cout << "Meni pieleen" << endl;
    }
    return onnistuuko;
}

bool asiakas::luotonNosto(double summa)
{
    bool onnistuuko = luottotili.withdraw(summa);
    if(onnistuuko == false){
        cout << "Meni pieleen" << endl;
    }
    return onnistuuko;
}

bool asiakas::tiliSiirto(double summa, asiakas &saaja)
{
    cout << "Pankkitili: " << nimi << " tekee tilisiirtoa " << saaja.nimi << ":lle" << endl;
    bool onnistuuko = kayttotili.withdraw(summa);
    if(onnistuuko == true){
        saaja.talletus(summa);
    }
    return onnistuuko;
}

