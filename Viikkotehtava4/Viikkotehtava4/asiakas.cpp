#include "Asiakas.h"
#include <iostream>

Asiakas::Asiakas(string nimi, double luottoraja) : nimi(nimi), luottotili(luottoraja) {}

void Asiakas::showSaldo() const {
    cout << "Asiakas: " << nimi << endl;
    cout << "Pankkitilin saldo: " << pankkitili.getBalance() << "e" << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << "e" << endl;
}

bool Asiakas::talletus(double summa) {
    return pankkitili.deposit(summa);
}

bool Asiakas::nosto(double summa) {
    return pankkitili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa) {
    return luottotili.maksaLuotto(summa);
}

bool Asiakas::luotonNosto(double summa) {
    return luottotili.withdraw(summa);
}

bool Asiakas::tiliSiirto(double summa, Asiakas &kohde) {
    if (pankkitili.withdraw(summa)) {
        kohde.pankkitili.deposit(summa);
        return true;
    }
    return false;
}
