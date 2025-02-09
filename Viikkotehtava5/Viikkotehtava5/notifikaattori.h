#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <iostream>
#include  "seuraaja.h"


using namespace std;

class Notifikaattori
{
public:
    Notifikaattori();
    void lisaa(Seuraaja *);
    void poista(Seuraaja *);
    void tulosta();
    void postita(string viesti);
    Seuraaja *getSeuraajat() const;

private:
    Seuraaja *seuraajat = nullptr;

};

#endif // NOTIFIKAATTORI_H
