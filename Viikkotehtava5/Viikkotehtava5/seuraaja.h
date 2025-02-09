#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>

using namespace std;


class Seuraaja
{
public:
    Seuraaja();
    Seuraaja(string);
    string getNimi() const;
    void paivitys(string viesti);

    Seuraaja* next = nullptr;

private:
    string n;

};

#endif // SEURAAJA_H
