#ifndef TPILA1_H
#define TPILA1_H

/*Ingresar, modificar, eliminar*/
#include <iostream>
#include <stdexcept>

template  <class T>
class Pila{
public:
    Pila (int = 10);
    ~Pila (){
        delete [] ptrPila;
    }
    bool push(const T&);
    bool pop(T&);
private:
    int tamanio;
    int cima;
    T *ptrPila;

    bool estaVacia() const{
        return cima == -1;
    }
    bool estaLlena(){
        return cima == tamanio-1;
    }

};
#endif // TPILA1_H
