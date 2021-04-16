#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

	int number = 0;
	cout << "Ingrese una cadena de numeros: ";
	string a;
	getline(cin, a);
	cout << endl;

	cout << "Modo string: "<< a << "\n";

	for (int i = 0; i < a.length(); i++) {
		int temp = 0;
		temp = int(a[i])-((int)'0');
		number = number * 10;
		number = number + temp;
	}

	cout << "Modo int: "<< number;
}
