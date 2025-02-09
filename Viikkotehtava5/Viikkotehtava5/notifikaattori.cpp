#include "notifikaattori.h"
#include  "seuraaja.h"
#include <iostream>


Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *lisattyseuraaja)
{
    lisattyseuraaja->next = seuraajat;
    seuraajat = lisattyseuraaja;
    cout << "Listaan lisatty seuraaja: " << lisattyseuraaja->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja *poistettuseuraaja)
{
    Seuraaja *alku = seuraajat;
    while (alku->next != nullptr)
    {
        if (alku->next == poistettuseuraaja)
        {
            alku->next = poistettuseuraaja->next;
        }
        else
        {
            alku = alku -> next;
        }
    }
    cout << "POISTETTU SEURAAJA: " << poistettuseuraaja->getNimi() << endl;
}


void Notifikaattori::tulosta()
{
    int Seuraajamaara = 0;
    Seuraaja *alku = seuraajat;
    cout<< "Seuraajat: " << endl;
    while(alku != nullptr){
        cout << alku->getNimi() << endl;
        Seuraajamaara++;
        alku = alku->next;
    }
    cout << "Seuraajien maara: " << Seuraajamaara<< endl;
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;

    while (alku != nullptr){
        alku ->paivitys(viesti);
        alku = alku->next;


    }

}
