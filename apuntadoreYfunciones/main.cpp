#include <iostream>
using namespace std;
void funcion3( int* a, char* b);

int main()
{
    //Ejercicio con apuntadores y funciones
    int a = 5;
    int *foo = &a;
    char caracter = 'A';
    char *punterochar = &caracter;

    funcion3(foo, punterochar);
    cout << *foo << *punterochar << endl;

    return 0;
}
void funcion3 (int* a, char* b)
{
    *a= 77;
    *b += 32;
}
