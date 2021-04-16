#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string numero;
	cout << "Ingrese un numero: ";
	int a;
	cin >> a;
	cout << endl;

	cout << "Modo entero: " << a << "\n";

	while(a >= 1) {
		numero.insert(0,to_string(a%10));
		a = a / 10;
	}
	cout << "Modo string: "<< numero;
}