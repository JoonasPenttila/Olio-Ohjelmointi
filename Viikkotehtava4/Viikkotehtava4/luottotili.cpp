#include "Luottotili.h"

Luottotili::Luottotili(double raja) : luottoraja(raja) {}

bool Luottotili::withdraw(double summa) {
    if (summa > 0 && (saldo - summa) >= -luottoraja) {
        saldo -= summa;
        return true;
    }
    return false;
}

bool Luottotili::maksaLuotto(double summa) {
    if (summa > 0 && saldo + summa <= 0) {
        saldo += summa;
        return true;
    }
    return false;
}
