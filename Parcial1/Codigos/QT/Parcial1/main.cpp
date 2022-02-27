#include "manejo_archivo.h"

int main()
{
    char archivo_text[]="mensajeInicial.txt", archivo_array[]="mensajeFinal.txt";
    unsigned char *data = nullptr;
    unsigned long long tamArchivo = 0;
    tamArchivo = tam(archivo_text);
    data = new unsigned char[tamArchivo + 1];
    leer(archivo_text, tamArchivo,data);
    //leí y toda mi información la tengo en data
    //la voy a pasar en forma de arreglo a otro archivo .txt para poder
    //pasar la información en forma de arreglo al tinkercad.

    return 0;
}
