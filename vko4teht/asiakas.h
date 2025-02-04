#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "pankkitili.h"
#include "luottotili.h"

class asiakas
{

public:
    asiakas(string n, double lr);
    string getName();
    void showSaldo();
    bool talletus(double summa);
    bool nosto(double summa);
    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);
    bool tiliSiirto(double summa, asiakas &saaja);


private:
    Pankkitili kayttotili;
    Luottotili luottotili;
    string nimi;

};



#endif // ASIAKAS_H
