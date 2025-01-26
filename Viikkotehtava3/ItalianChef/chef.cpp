#include "Chef.h"

Chef::Chef(string name) {
    chefName = name;
    cout << "Chef konstruktori, nimi: " << chefName << endl;
}

Chef::~Chef() {
    cout << "Chef destruktori" << endl;
}

string Chef::getChefName() const {
    return chefName;
}

int Chef::makeSalad(int aines) {
    int annoksia = aines / 5;
    cout << "Salaattiin aines: " << aines << endl;
    cout << "Voimme valmistaa " << annoksia << " annosta salaattia." << endl;
    return annoksia;
}

int Chef::makeSoup(int aines) {
    int annoksia = aines / 3;
    cout << "Keittoon aines: " << aines << endl;
    cout << "Voimme valmistaa " << annoksia << " annosta keittoa." << endl;
    return annoksia;
}
