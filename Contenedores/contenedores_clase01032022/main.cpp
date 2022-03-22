#include <iostream>
#include <vector>

using namespace std;
const int num_elementos=10;
int main()
{
    vector<int> g1;

    for(int i =1; i  <= num_elementos; i++){
        g1.push_back(i);
        cout << "capacidad en bytes: " << g1.capacity() * sizeof (int)<< endl;
    }
//  Método para reducir la capacidad a la cantidad que se ingreso al final
    g1.shrink_to_fit();
    cout << "capacidad en bytes: " << g1.capacity() * sizeof (int)<< endl;

    cout << "============================" << endl;
    cout <<" Recorrer la estrucutra de datos de principio a fin" << endl;
// La palabra reservada auto infiere el tipo de dato
// i es un iterador a las posiciones de los elementos
    for(auto i = g1.begin(); i!=g1.end();++i)
        cout << *i << " "; // * se usa para desrreferenciar al valor que tiene el iterador en esa posición

    cout << "============================" << endl;
    cout <<" Recorrer la estrucutra de datos en reversa desde el final al principio" << endl;
    for(auto ir = g1.rbegin(); ir!=g1.rend();++ir)
        cout << *ir << " " << endl;

    cout << "============================" << endl;
    while(g1.size())
        g1;
    return 0;
}
