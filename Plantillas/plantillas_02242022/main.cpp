#include <iostream>
#include <string.h>
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

    return 0;
}
