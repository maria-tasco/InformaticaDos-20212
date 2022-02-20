#include <iostream>
using namespace std;

//Ejercico de exploracion en arduino
//int main()
//{
//    //Ejercicio de exploracion de lenguaje, transformar un numero ingresado a binario y luego coger bit a bit desde el bit más y menos significativo
//    //Con el bit menos significativo
//    /*
//    unsigned char vble5 = 0b10101010;
//    for (unsigned short int ind = 0; ind < 8 ; ind ++)
//    {
//        short int residuo = vble5 & 0b00000001;
//        vble5 = vble5 >>  1;
//        cout << residuo << endl;
//    }
//    */
//    //Con el bit mas significativo

//    unsigned char vble5 = 0b10101010;
//    for (unsigned short int ind = 0; ind < 9 ; ind ++)
//    {
//        short int residuo = vble5 & 1;
//        vble5 >>=  1;
//        cout << residuo << endl;
//    }

//    return 0;
//}

//Ejercicio de operadores
int main()
{
    int someInteger = 256;
    short someShort;
    long someLong;
    float someFloat;
    double someDouble;
    someInteger++;
    someInteger *= 2;
    someShort = static_cast<short>(someInteger);
    someLong = someShort * 10000;
    someFloat = someLong + 0.785f;
    someDouble = static_cast<double>(someFloat) / 100000;
    cout << someDouble << endl;
    return 0;
}

