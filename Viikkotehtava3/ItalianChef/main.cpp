#include "Chef.h"
#include "ItalianChef.h"

int main() {

    Chef chef1("Mikko");
    chef1.makeSalad(15);
    chef1.makeSoup(9);


    ItalianChef italianChef1("Luigi");
    italianChef1.makeSalad(10);


    italianChef1.askSecret("pizza", 20, 20);

    return 0;
}
