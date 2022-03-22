#include <iostream>
#include <string.h>
#include "tpila1.h"
using namespace std;

template <typename T>
class maximo {
public:
    maximo(T first, T second) {
        a=first; b=second;
    }

    T getmax();

private:
    T a,b;
};

// Se necesita colocar siempre template <class T> para la declaración de metodos ofline
template <class T>
T maximo<T>::getmax(){
    T retval;
    retval = a>b ? a:b;
    return retval;
}
// Para pasarle parametros por la linea de comando y seas valores de prueba
int main(int argc, char *argv[] )
{
// USO DE LOS PARAMETROS EN EL MAIN
    for(int i=0; i<argc; i++){
        cout << "argc[" <<i<< "]" << argv[i] << endl;
    }

// Funciones de conversión de la libreria string:
// Pasa el caracter en esa posición a un numero int
//    int a = stoi(argv[1]);
// Pasa el caracter en la posición a un numero float
//    float b = stof(argv[2]);
// Le paso a la var c el valor de "a"
//    char c = argv[3][0];


// USO DE LA CLASE DE PLANTILLA
    int i=5, j=58;
// La declaración/ instancia tiene una pequeña similitud con los contenedores
    maximo <int> myobjectInt(i,j);
    myobjectInt.getmax();

    float k=5.4, l=5.5;
    maximo <int> myobjectfloat(k,l);
    myobjectfloat.getmax();

// EJERCICIO: CREACIÓN DE UNA PILA DE ALMACENAMIENTO
    Pila<double> pilaDouble(5);
    double d=1.1;
    cout << "colocando elementos en la pila: " << endl;
    try {
        while (true) {
            if(pilaDouble.push(d)){
                cout << d << " , ";
                d+= 1.1;
            }
            else {
                throw out_of_range("Pila<>::push: pila llena");
            }
        }
    }  catch (exception const& ex) {
        cerr << "\nException: "<< ex.what() << endl;
    }
    cout << "\nla pila esta llena\n" << endl;

    cout << "sacando elementos de la pila" << endl;
    while(pilaDouble.pop(d)){
        cout << d << " ";
    }
    cout << "la pila esta vacia" << endl;


    Pila<int> pilaInt;
    int e=1;
    cout << "colocando elementos en la pila: " << endl;
    while (pilaInt.push(e)) {
        cout << e << " ";
        ++ e;
    }
    cout << "\nla pila esta llena\n" << endl;

    cout << "sacando elementos de la pila" << endl;
    while(pilaInt.pop(e)){
        cout << e << " ";
    }
    cout << "la pila esta vacia" << endl;
    return 0;
}
