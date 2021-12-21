#include <iostream>
using namespace std;

int main()
{
    //Ejercicio de exploracion de lenguaje, transformar un numero ingresado a binario y luego coger bit a bit desde el bit más y menos significativo

    unsigned char vble5 = 0b10101010;
    for (unsigned short int ind = 0; ind < 8 ; ind ++)
    {
        short int residuo = vble5 & 0b00000001;
        vble5 = vble5 >>  1;
        cout << residuo << endl;
    }

    return 0;
}
