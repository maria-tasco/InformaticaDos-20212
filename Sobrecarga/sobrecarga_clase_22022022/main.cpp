#include <iostream>

using namespace std;
class carro{
private:
    int gGas=1;
    char *marca=nullptr;
    int velMax=50 ;
    int vel = 0;
    bool start = false;
public:
// Constructor por defecto:
    carro(){
        start=true;
        marca = new char[5]{'f','o','r','d','\0'};
    }
// Constructo sobrecargado
    carro (int velMax){
        this -> velMax = velMax;
        gGas = 10;
    }
    void arrancar();
    void acelerar();
    void acelerar( int incremento);
    void frenar();
    int getVel() const{
        return vel;
    }

    ~carro(){
        delete []marca;
    }
};

int main()
{
    int a=10;
    carro c1;
    c1.acelerar();
    c1.acelerar(a);

// Arreglo de objetos:
// Se esta usando el contructor de copia y se inicializa solo el primer objeto con velocidad max 10
// Los otros 9 elementos los inicializa con el constructor por defecto
    carro parqueadero[10] = {{10}} ;
//    carro* carros = new carro [20];

    return 0;
}

void carro::acelerar()
{

    this -> vel++;//me dice que esta variable es de esta clase
}

void carro::acelerar(int incremento)
{
    this ->vel +=incremento;
}

void carro::frenar()
{
    vel=0;
}
