#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Ingrese su Nombre y Apellido por separado \n";
    string nombre , apellido;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    string nombreyapellido = nombre + " " + apellido;

    cout << "Su nombre completo es: " << nombreyapellido;
}
