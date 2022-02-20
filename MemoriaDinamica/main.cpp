#include <iostream>

using namespace std;

int main()
{
//    int a = 5; // esta en el stack
//    int *foo = new int (0); //Inicializo en 0 ese espacio de memoria // foo esta en el stack, la direeción de foo // donde él esta apuntando está en el heap
//    //int *foo2 = new int (a); //Toma una copia del valor de a
//    int bar = a;
//    //float *ptrB = new float (75.25);

//    //Reserva de memoria sin inicalizar
//    int a2 = 77;
//    int *ptrA = NULL;


//    //Reservar para un bloque de memoria 1D
      int tam =0;
      cout << "Ingres el tamaño del arreglo: "<< endl;
      cin >> tam;
//    int *ptrArray = new int [tam]{1,5,7,3,4,8,9};
//    cout << "La dirección a la que apunta ptrArray es " << ptrArray << " y su contenido es "<< endl;
//    for (int i = 0; i < tam; i++){
//        cout << "[ "<< ptrArray[i] <<" ]";
//        cout.flush();
//    }
//    cout << endl << endl;
//    //Moviendome con operardor desplazamiento para conocer la dirección de memoeria en el heap y los valores que guarda
//    for (int i = 0; i < tam; i++){
//        cout << (ptrArray + i)<< " = [ "<< *(ptrArray + i) <<"]" << endl;
//    }
//    //Aquí se recoge la basura
//    delete []ptrArray;


//    ptrA = new int;
//    cout << "La dirección a la que apunta ptrA es " << ptrA << "y su contenido es " << *ptrA << endl;

//    *ptrA = 10;
//    cout << "La dirección a la que apunta ptrA es " << ptrA << "y su contenido es " << *ptrA << endl;

//    *ptrA = a2; //mantengo la dirección del heap y le doy el valor de a2
//    cout << "La dirección a la que apunta ptrA es " << ptrA << "y su contenido es " << *ptrA << endl;

//    delete ptrA;

//    ptrA = &a2; //Cambie a donde estoy apuntando y se perdio la dirección que yo tenía en el heap
//    cout << "La dirección a la que apunta ptrA es " << ptrA << "y su contenido es " << *ptrA << endl;

//    cout << "la dirección de foo es: " << &a << "Y ocupa" << sizeof (foo) << "bytes" << endl;
//    cout << "la dirección de foo es: " << foo << "Y ocupa" << sizeof (foo) << "bytes" << endl;
//    cout << "la dirección de foo es: " << &bar << "Y ocupa" << sizeof (foo) << "bytes" << endl;

//    delete foo; //Se debe liberar memoria


//    //ARREGLOS 2D
//    char** pvalue = nullptr; // esto es un puntero a un puntero en pocas palabras: una matriz, un arreglo de apuntadores.
//    pvalue = new char* [tam]{nullptr};
//    for (int i=0; i < tam; ++i){
//        pvalue[i] = new char [tam]; // le estoy dando a cada elemento de pvalue una dirección de memoria del heap correspondiente a un char de tamaño tam
//    }
//    for (int i=0; i < tam; ++i){
//        cout << "[" << &pvalue[i] << "]" << endl;
//    }

//    int cont = 0;
//    for (int i=0; i < tam; ++i){
//        for (int j=0; j < tam; ++j){
//            pvalue[i][j] = '0'+cont++; //¿por qué se usa el '0'?
//        }
//    }

//    cout << endl;
//    for (int i=0; i < tam; ++i){
//        for (int j=0; j < tam ; ++j){
//            cout << "[" << &pvalue[i] << "]" << '\t';
//            cout << "[" << &pvalue[j] << "]" << endl;
//        }
//    }

//    cout << "Impresión matriz de datos: " << endl;
//    for (int i=0; i < tam; ++i){
//        for (int j=0; j < tam; ++j){
//            cout << "[ "<< pvalue[i][j] << " ]";
//            cout.flush();
//        }
//        cout << endl;
//    }

//    //se libera memoria
//    for (int i=0; i < tam; ++i){
//        delete []*(pvalue + i);
//    }
//    delete [] pvalue;


//      //CAMBIAR TAMAÑO DE UNA ARREGLO DESDE EL STACK
//      int a1 = 5;
//      int* foo3 =  new int (a1);//en foo3 reserve memoria del heap y dele el valor de a1
//      int bar1[5] = {1,2,5,3};

//      delete foo3; //libero memoria y pierdo lo que tenía allí, en este caso el valor de a
//      foo3 = new int [10]; //vuelvo a reservar memoria en el heap

//      for (int i=0; i<5; ++i){
//          foo3[i] = bar1[i]; //le estoy pasando al puntero lo que tenía en bar, pero el arreglo de 10 esta en el heap
//      }

//      delete foo3;


    //ARRAY DINAMICO PARA NOTAS DE UN CURSO
    tam =0;
    unsigned short int nota = 0;
    cout << "Ingres el tamaño del arreglo: "<< endl;
    cin >> tam;
    unsigned short int *ptrArray = new unsigned short int [tam]{1,5,7,3,4,8,9};
    cout << "La dirección a la que apunta ptrArray es " << ptrArray << " y su contenido es "<< endl;
    for (int i = 0; i < tam; i++){
        cout << "Ingrese la nota, numero entero 1-10: " << endl;
        cin >> nota;
        ptrArray [i] = nota;
        //*(ptrArray + i) = nota;
        cout << "[ "<< ptrArray[i] <<" ]";
        cout.flush();
    }
    cout << endl << endl;

    //liberar espacio
    delete [] ptrArray;

    return 0;
}
