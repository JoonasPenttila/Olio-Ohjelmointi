#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <iostream>
using namespace std;

class Pankkitili {
public:
    Pankkitili();
    virtual ~Pankkitili() = default;

    virtual bool deposit(double summa);
    virtual bool withdraw(double summa);
    double getBalance() const;

protected:
    double saldo;
};

#endif // PANKKITILI_H
