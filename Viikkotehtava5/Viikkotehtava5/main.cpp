#include <iostream>
#include <memory>
#include<seuraaja.h>
#include<notifikaattori.h>.h>


using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("A Jake");
    Seuraaja *B = new Seuraaja("B Make");
    Seuraaja *C = new Seuraaja("C Kake");
    Notifikaattori *n =new Notifikaattori();

    n->lisaa(A);
    n->lisaa(C);
    n->lisaa(B);
    n->tulosta();


    n->postita("viesti1");

    n->poista(B);

    n->postita("viesti2");



    delete A;
    delete B;
    delete C;
    delete n;
    return 0;
}
