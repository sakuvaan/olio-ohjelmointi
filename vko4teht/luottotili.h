#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"


class Luottotili : public Pankkitili
{
public:
    Luottotili();
    Luottotili(string nimi, double lr);

    virtual bool deposit (double summa) override;
    virtual bool withdraw (double summa) override;

protected:
    double luottoraja = 0;


};

#endif // LUOTTOTILI_H
