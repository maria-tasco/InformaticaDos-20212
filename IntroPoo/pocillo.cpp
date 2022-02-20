#include "pocillo.h"
#include <iostream>
using namespace std;

pocillo::pocillo(unsigned short tam, unsigned char col, char *mat)
{
    this ->tam[0] = tam;
    this ->tam[1] = tam;
    this ->tam[2] = tam;

    color[0] = col;
    color[1] = col;
    color[2] = col;

    material = mat;
}

void pocillo::setTam(unsigned short array[])
{
    for (int i=0; i<3; i++){
        tam[i] = array[i];
    }
}

char *pocillo::getMaterial() const
{
    return material;
}

void pocillo::setMaterial()
{
    char msg[20];
    cout << "ingrese el tipo de material: " << endl;
    cin >> msg;
    material = new char [sizeof (msg)];

    for (int i=0; i < sizeof (msg); ++i){
        material[i] = msg[i];
    }
//    material = newMaterial;
}
