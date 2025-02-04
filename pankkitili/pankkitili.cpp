#include "pankkitili.h"

pankkitili::pankkitili() {
    saldo = 0;
    pinkoodi = "123456789";
    tilinro = "FI1234567890";
}

pankkitili::pankkitili(string pk)
{
    this->pinkoodi = pk;
}

int pankkitili::getSaldo() const
{
    return saldo;
}

void pankkitili::setSaldo(int newSaldo)
{
    saldo = saldo + newSaldo;
}
