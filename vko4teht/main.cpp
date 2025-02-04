#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    asiakas as1("Aapeli", -1000);
    as1.talletus(250);
    as1.luotonNosto(150);
    as1.showSaldo();

    cout << endl;
    asiakas as2("Bertta", -1000);

    cout << as1.getName() << endl;
    as1.showSaldo();
    as1.tiliSiirto(50, as2);
    cout << as2.getName() << endl;
    as2.showSaldo();
    cout << endl;


    return 0;
}
