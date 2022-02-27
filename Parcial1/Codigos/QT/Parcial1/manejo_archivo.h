#ifndef MANEJO_ARCHIVO_H
#define MANEJO_ARCHIVO_H

#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

void crear (char *nombre);
void escribir(char *nombre,unsigned char *datos, unsigned long long int tam);
unsigned long long tam(char *nombre);
bool leer (char *nombre, unsigned long long tam,unsigned char *data);

#endif // MANEJO_ARCHIVO_H
