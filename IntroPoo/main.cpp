#include <iostream>
using namespace std;

#include "pocillo.h"

int main()
{
//    pocillo mug, tacita;
//    unsigned short int tamMain[3] = {10, 40, 60};
//    mug.setTam(tamMain);

    char material[] = "Acrilico";
    pocillo especial(5, 255, material);

    especial.setMaterial();
    char *materialP;
    materialP = especial.getMaterial();

    cout <<"El material de pocillo especial es: "<<materialP << endl;
    return 0;
}

