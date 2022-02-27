#include "manejo_archivo.h"


void crear(char *nombre)
{
    fstream text(nombre, fstream::out); //se crear el archivo y se abre en modo escritura o se crea ahí mismo por ser en modo escritura
    text.close();
}

void escribir(char *nombre, unsigned char *datos, unsigned long long tam)
{
    //datos tengo guarda la información normal para leer
    fstream text;
    //si tipo es verdadero voy a escribir el archivo en modo convencional
    text.open(nombre, fstream::out);
    text << datos;
    text.close();
}

unsigned long long tam(char *nombre) {
    unsigned long long tam = 0;
    fstream text(nombre, fstream::in| fstream::ate | fstream::binary);
    if (text.is_open())
        tam = text.tellg();
    text.close();
    return tam;
}


bool leer(char *nombre, unsigned long long tam,unsigned char *data)
{
    fstream text(nombre, fstream::in | fstream::binary);
    bool confirma = text.is_open();
    if (confirma){
        try {
            for(unsigned long long int i=0; i<tam; i++)
                data[i]=text.get();//con la función get obtenemos los caracteres de el archivo de texto uno a uno y se lo vamos dando a cada posición de la variable char

            data[tam]='\0'; //después de leer y pasar lo que leimos al arreglo colocamos en la última posición el caracter de fin de cadena
            cout << data << endl;

        }  catch (bad_alloc) {
            cout << "el archivo ingresado es muy pesado para el sistema" << endl;
        }

    }
    else
        cout << "El archivo no pudo ser abierto" <<endl;

    text.close();

    return confirma;
}

