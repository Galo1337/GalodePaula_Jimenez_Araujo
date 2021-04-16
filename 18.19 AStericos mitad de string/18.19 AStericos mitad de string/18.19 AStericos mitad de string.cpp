#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Ingrese un string ";
    string palabra;
    getline (cin,palabra);

    string asterisco = "******";
    int lenght = ((palabra.length())/2);

    palabra.insert(lenght,asterisco);

    cout << "Asteriscos agregados: " << palabra;
}