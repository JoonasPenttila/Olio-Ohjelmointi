#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "Pankkitili.h"
using namespace std;

class Luottotili : public Pankkitili {
public:
    Luottotili(double luottoraja);
    bool withdraw(double summa) override;
    bool maksaLuotto(double summa);

protected:
    double luottoraja;
};

#endif // LUOTTOTILI_H
