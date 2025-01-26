#include "ItalianChef.h"

ItalianChef::ItalianChef(string name) : Chef(name) {
    secretPassword = "pizza";
    cout << "ItalianChef konstruktori" << endl;
}

bool ItalianChef::askSecret(string password, int flour, int water) {
    if (password == secretPassword) {
        makePizza(flour, water);
        return true;
    } else {
        cout << "Väärä salasana!" << endl;
        return false;
    }
}

void ItalianChef::makePizza(int flour, int water) {
    int pizzas = 0;
    while (flour >= 5 && water >= 5) {
        flour -= 5;
        water -= 5;
        pizzas++;
    }
    cout << "Voimme valmistaa " << pizzas << " pizzaa." << endl;
}
