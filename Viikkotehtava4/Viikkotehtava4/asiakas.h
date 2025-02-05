#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "Pankkitili.h"
#include "Luottotili.h"
#include <string>
using namespace std;

class Asiakas {
public:
    Asiakas(string nimi, double luottoraja);

    void showSaldo() const;
    bool talletus(double summa);
    bool nosto(double summa);
    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);
    bool tiliSiirto(double summa, Asiakas &kohde);

private:
    string nimi;
    Pankkitili pankkitili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
