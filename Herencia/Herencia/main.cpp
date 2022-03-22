#include <iostream>

using namespace std;

class MiembroComunidad
{
public:
   MiembroComunidad(){
        id=0;
        edad=0;
    }
    // Pregunte por qué se coloca el = Parametros por defecto
    MiembroComunidad(string nombre, unsigned int identificacion=0, unsigned int edad=0){
        this ->nombre = nombre;
        this ->edad = edad;
        this -> id= identificacion;
    }
    string get_nombre() const{
        return this ->nombre;
    }
protected:
    string nombre;
    unsigned int id=0;
    unsigned int edad=0;
};

class Empleado : public MiembroComunidad
{
public:
    Empleado(string nombre,
             unsigned int sueldo,
             unsigned int id=0,
             unsigned int edad=0):MiembroComunidad(nombre,id,edad)
    {
//        MiembroComunidad::nombre = nombre;
//        MiembroComunidad::edad = edad;
//        MiembroComunidad::id= identificacion;
        this -> sueldo = sueldo;
    }

private:
    string cargo;
    unsigned int sueldo;
};

class Estudiante : public MiembroComunidad
{
public:
    Estudiante(string nombre,
               string programaAcademico,
               unsigned int id=0,
               unsigned int edad=0):MiembroComunidad(nombre,id,edad){
        this ->programaAcademico =programaAcademico;
    }
private:

    string programaAcademico;
//    string sede;
//    unsigned char numeroSemestre;
//    unsigned short int numeroCreditos;
//    float promedioSemestre;
//    float promedioAcomulado;
};

class Egresado: public MiembroComunidad
{
public:
    Egresado(string nombre,
             unsigned int numeroTP,
             unsigned int id=0,
             unsigned int edad=0):MiembroComunidad(nombre,id,edad){
        this ->numeroTP =numeroTP;
    }
private:

    unsigned int numeroTP;
//    string tituloU;
//    string enfasisProfesioanl;
};

int main()
{
    MiembroComunidad p1("persona1",1234,25);
    Empleado e1("Em1",150000,123,15);
    cout << p1.get_nombre();
    cout << e1.get_nombre();
    return 0;
}
