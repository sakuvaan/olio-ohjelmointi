#include <iostream>
#include "pankkitili.h"
using namespace std;

int main()
{
    pankkitili munTili;

    munTili.setSaldo(100);

    cout << "Saldo on "
         << munTili.getSaldo()
         << endl;

    pankkitili toinentili("5566");

    toinentili.setSaldo(200);

    cout << "Saldo on "
         << toinentili.getSaldo()
         << endl;
    return 0;
}
