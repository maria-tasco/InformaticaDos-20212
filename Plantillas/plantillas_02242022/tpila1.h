#ifndef TPILA1_H
#define TPILA1_H

/*Ingresar, modificar, eliminar*/
#include <iostream>
#include <stdexcept>

/*!
*/

template  <class T>
class Pila{
public:
// Parametros inicialmente va a tener la pila.
// Se coloca así porque es un valor por defecto
    Pila (int tam= 10);

    ~Pila (){
        delete [] ptrPila;
    }
// Permite ingresar elementos a la pilla
// Retorna verdadero si se pudo ingresar elementos, de lo contraio falso
    bool push(const T&);
    /*!
     * Permite sacar elementos del contenedor
    */
    bool pop(T&);
private:
    int tamanio;
    int cima;
//Aquí va a estar la estructura
    T *ptrPila;

    bool estaVacia() const{
        return cima == -1;
    }
    bool estaLlena(){
        return cima == tamanio-1;
    }

};

// Definición del constructor
template<class T>
Pila<T>::Pila(int tam){
    this ->tamanio = tam > 0 ? tam : 10;
    cima =-1;
    ptrPila = new T[tamanio]{0} ;
}

template<class T>
// Aquí estoy haciendo un asignación por referencia
bool Pila<T>::push(const T& coloca_valor){
    if(!estaLlena()){
        // estoy haciendo un pre-incremento
        ptrPila[++cima] = coloca_valor;
        return true;
    }
    return false;
}

template<class T>
bool Pila<T>::pop(T& saca_valor){
    if(!estaVacia()){
        saca_valor = ptrPila[cima--];
        return true;
    }
    return false;
}
#endif // TPILA1_H
