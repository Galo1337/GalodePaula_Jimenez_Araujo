#include <iostream>
#include <string>
using namespace std;

int encriptar(string mensaje, int a);

int main() {
	int x;
	cout << "Ingrese la altura de la reja: ";
	cin >> x;
	cin.ignore();

	cout << "Ingrese el mensaje que quiera encriptar: ";
	string a;
	getline(cin, a);
	cout << endl;

	encriptar(a, x);

	return 0;
}

int encriptar(string mensaje, int a) {

	int cycle_lenght = mensaje.length() / a;
	int cycle_r = mensaje.length() % a;

	cout << "cycle lenght: " << cycle_lenght << "\n";
	cout << "cycle r: " << cycle_r<< "\n";

	int e = 0;
	int extra = 1;


	for (int i = 0; i < a; i++) {
		string mensaje_encriptado = "";
		if (i == 0 || i == a-1) {
			for (int j = i; j < mensaje.length(); j = j + ((a*2)-2)) {
				mensaje_encriptado += mensaje[j];
			}
		}
		else {
			for (int j = i; j < mensaje.length(); j = j + ((a * 2) - 2)/2) {
				mensaje_encriptado += mensaje[j];
			}
		}
		cout << mensaje_encriptado;
	}
	return 1;
}