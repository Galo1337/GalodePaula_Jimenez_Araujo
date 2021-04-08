#include <iostream>
#include <string>
using namespace std;

int matriz(int a, int b);
int encriptar(string mensaje, int a, int b);
int decriptar(string mensaje, int a, int b);

int main() {
	int x, y;
	cout << "Ingrese las dimensiones de la matriz \n";
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;

	int char_lenght = x * y;

	cin.ignore();
	cout << "Ingrese el mensaje que quiera encriptar o decriptar: ";
	string a;
	getline (cin,a);
	cout << endl;

	int choice;
	cout << "Ingrese 1 is quiere encriptar, 2 si quiere decriptar: ";
	cin >> choice;

		if(choice == 1) {
			encriptar(a, x, y);
		}
		else {
			decriptar(a, x, y);
		}
}

int encriptar(string mensaje,int a, int b) {
	if (mensaje.length() > a * b)
	{
		cout << "La cadena es mas larga que la matriz \n";
		return 0;
	}
	
	if (mensaje.length() < a * b)
	{
		int lenght_sum = (a * b) - mensaje.length();
		for (lenght_sum; lenght_sum < (a*b) ; lenght_sum++)
		{
			mensaje.append(" ");
		}
	}

	string mensaje_encriptado = mensaje;
	int size = a*b;
	mensaje.resize(size); 
	int z = 0;

	for (int i = 0; i < b; i++) {
		for (int j = 0; j < a; j++) {
			mensaje_encriptado[z] = mensaje[i + (j * b)];
			z++;
		}
	}
	cout << mensaje_encriptado;
	return 1;	
}

int decriptar(string mensaje, int a, int b) {
	if (mensaje.length() > a * b)
	{
		cout << "La cadena es mas larga que la matriz \n";
		return 0;
	}

	if (mensaje.length() < a * b)
	{
		int lenght_sum = (a * b) - mensaje.length();
		for (lenght_sum; lenght_sum < (a * b); lenght_sum++)
		{
			mensaje.append(" ");
		}
	}

	string mensaje_encriptado = mensaje;
	int size = a * b;
	mensaje.resize(size);
	int z = 0;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			mensaje_encriptado[z] = mensaje[i + (j * a)];
			z++;
		}
	}
	cout << mensaje_encriptado;
	return 1;
}

int matriz(int a, int b) {
	return a;
	return b;
}