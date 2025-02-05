#include "Pankkitili.h"

Pankkitili::Pankkitili() : saldo(0) {}

bool Pankkitili::deposit(double summa) {
    if (summa > 0) {
        saldo += summa;
        return true;
    }
    return false;
}

bool Pankkitili::withdraw(double summa) {
    if (summa > 0 && saldo >= summa) {
        saldo -= summa;
        return true;
    }
    return false;
}

double Pankkitili::getBalance() const {
    return saldo;
}
