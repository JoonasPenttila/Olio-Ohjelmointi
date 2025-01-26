#ifndef ITALIAN_CHEF_H
#define ITALIAN_CHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
public:
    ItalianChef(string name);
    bool askSecret(string password, int flour, int water);

private:
    string secretPassword;
    void makePizza(int flour, int water);
};

#endif
