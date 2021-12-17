#include <iostream>

using namespace std;

int main()
{
    /*unsigned char vble5 = 0b10101010;
    for (unsigned short int ind = 0; ind < 7 ; ind ++)
    {
        short int residuo = vble5 & 0b00000001;

    }*/
    bool a = 1;
    bool* foo = &a;
    bool bar = a;
    //cout <<&a << endl;
     cout << foo << endl;
    foo -=1; // se esta moviendo en la dirección de memoria de a.
    cout << foo << endl;
    cout << &bar << endl;

    foo = &bar ; // apuntar a varios en diferentes instantes de tiempo, una a la vez.
    cout << foo << endl;
    return 0;
}
