#include <iostream>

using namespace std;

#define FIL 5
#define COL 4

void elevarCuadrado (int *ptr, int numElementos);
void matriz2D (int *ptrToptr);

int main()
{
    int b[5]={1,3,5,7,9};
    int notasEstudiantes[5]={0};
    int *bPtr = b;
    char mensaje [] = {'h','o','l','a'};

    // MANEJO DE ARREGLOS Y APUNTADORES, RRECORRER LA MEMORIA CON INDICE O DESPLAZAMIENTO//

    //Impresion del arreglo y la dirección de memoria de cada elemento usando directamente la dirección de b
    for (int i=0; i<5; i++)
    {
        cout << "b[ " << i << " ] = " << b[i] << " y su dirección de memoria es: " << &b[i] << endl;
    }
    cout << endl ;
    //Impresion del arreglo y la dirección de memoria de cada elemento usando el puntero con la 1ra dirección de b
    for (int i=0; i<5; i++)
    {
        cout << "b[ " << i << " ] = " << b[i] << " y su dirección de memoria es: " << (bPtr+i) << endl;
        //++bPtr;
    }
    cout << endl ;
    //Impresion del arreglo y la dirección de memoria de cada elemento usando el puntero y subindice &
    for (int i=0; i<5; i++)
    {
        cout << "bPtr[ " << i << " ] = " << bPtr[i] << " y su dirección de memoria es: " << &bPtr[i] << endl;
        //++bPtr;
    }
    cout << endl ;

    //Llama a la función pasandole el arreglo b por referencia (siempre es así) ya que tiene la primera dirección
    elevarCuadrado(b,5);
    cout << "Arreglo modificado desde la funcion usando el nombre del arreglo: " << endl;
    for (int i=0; i<5; i++)
    {
        cout << "bPtr[ " << i << " ] = " << bPtr[i] << " y su dirección de memoria es: " << &bPtr[i] << endl;
        //++bPtr;
    }
    cout << endl ;
    elevarCuadrado(bPtr,5);
    cout << "Arreglo modificado por segunda vez desde la funcion usando un puntero al arreglo: " << endl;
    for (int i=0; i<5; i++)
    {
        cout << "bPtr[ " << i << " ] = " << bPtr[i] << " y su dirección de memoria es: " << &bPtr[i] << endl;
        //++bPtr;
    }
    cout << endl ;
    cout<<"Se prueba de que se puede indexar de forma negativa la memoria"<< endl;
    cout << "Se indexa de forma negativa a travez del puntero: " << endl;
    for (int i = -1; i<5; i++){
        cout << "|| &bPtr[ "<<i<<" ]" << " y su dirección de memoria es: " << &bPtr[i]<< endl;
    }
    cout << endl ;
    cout<< "Desplazo el puntero entero para llegar a la palabra hola que en memoria ya vi que esta después del arreglo" << endl;
    for (int i = 0; i<6; i++){
        cout << "|| &bPtr[ "<<i<<" ]" << " = " << bPtr[i]  << " y su dirección de memoria es: " << &bPtr[i]<< endl;
    }
    cout << endl ;
    cout << "Dirección de memoria del primer elemento del arreglo char mensaje: "<< &mensaje <<endl;

    // ARREGLOS DE APUNTADORES //
    // Mirar las imagenes


    // INTRODUCCIÓN A MEMORIA DINAMICA: Calcular el promedio de notas de varios estudiantes //


    return 0;
}
void elevarCuadrado (int *ptr, int numElementos) {

    //OPreaciones utilizando el operador subindice
    for (int i=0; i<numElementos; i++)
    {
        ptr[i] = ptr[i] * ptr[i];
    }

//    //Opreaciones usando operador desplazamiento
//    for (int i=0; i<numElementos; i++)
//    {
//        *(ptr + i) = *(ptr + i) * *(ptr + i);
//    }

//    //Opreaciones usando operador desplazamiento
//    for (int i=0; i<numElementos; i++)
//    {
//        *ptr = *ptr * *ptr;
//        ++ptr;
//    }
}

void matriz2D (int **ptrToptr) {
    for ( int i = 0; i < FIL; i++){
        for (int j = 0; j < COL; j++){
            ptrToptr[i][j] = i*COL+j;
        }
    }
}
