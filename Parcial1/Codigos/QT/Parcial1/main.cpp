#include "manejo_archivo.h"

int main()
{
    char archivo_text[]="mensajeInicial.txt", archivo_array[]="mensajeFinal.txt";
    char *data = nullptr;
    unsigned long long tamArchivo = 0;
    tamArchivo = tam(archivo_text);
    data = new char[tamArchivo + 1];
    leer(archivo_text, tamArchivo,data);
    //leí y toda mi información la tengo en data
    return 0;
}
