#ifndef CHEF_H
#define CHEF_H

#include <iostream>
#include <string>

using namespace std;

class Chef {
public:
    Chef(string name);
    ~Chef();

    string getChefName() const;
    int makeSalad(int aines);
    int makeSoup(int aines);

protected:
    string chefName;
};

#endif
