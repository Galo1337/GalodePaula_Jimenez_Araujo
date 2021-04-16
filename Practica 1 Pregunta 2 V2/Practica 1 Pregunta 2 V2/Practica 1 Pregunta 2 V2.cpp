#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

	int number = 0;
	string numeros = "0123456789";
	cout << "Ingrese una cadena de numeros: ";
	string a;
	getline(cin, a);
	cout << endl;

	cout << "Modo string: " << a << "\n";

	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < 10; j++) {
			a.find(numeros[j]);
			cout << j;
			number = number * 10;
			number = number + j;
		}
	}

	cout << "Modo int: " << number;
}
