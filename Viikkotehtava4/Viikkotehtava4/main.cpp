#include "Asiakas.h"
#include <iostream>
using namespace std;

int main() {
    Asiakas asiakas1("Annika", 500);
    Asiakas asiakas2("Martti", 1000);

    asiakas1.talletus(1000);
    asiakas1.nosto(200);
    asiakas1.luotonNosto(300);
    asiakas1.showSaldo();

    asiakas2.talletus(500);
    asiakas2.luotonMaksu(200);
    asiakas2.showSaldo();

    asiakas1.tiliSiirto(150, asiakas2);

    cout << "Tilisiirron jalkeen:" << endl;
    asiakas1.showSaldo();
    asiakas2.showSaldo();

    return 0;
}
