#include <iostream>
#include <string>
using namespace std;

int encriptar(string mensaje, int a);
int desencriptar(string mensaje, int a);
int modular_galo(int a1, int b1);
int NEO_hack(string mensaje_por_romper);
int revision(string a, int x);

int main() {
	int x;
	cout << "Ingrese la llave que quiera usar: ";
	cin >> x;
	cin.ignore();

	cout << "Ingrese el mensaje que quiera encriptar o decriptar: ";
	string a;
	getline(cin, a);

	revision(a, x);
}

int encriptar(string mensaje, int a) {

	string alphaL = "abcdefghijklmnopqrstuvwxyz1234567890-,.()ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
	int mensage_l = mensaje.length();
	for (int i = 0; i < mensage_l; i++) {
		for (int j = 0; j < alphaL.length(); j++) {
			if (mensaje[i] == alphaL[j]) {
				int result = modular_galo(j + a, alphaL.length());
				mensaje[i] = alphaL[result];
				break;
			}
		}

	}
	cout << mensaje;
	return 1;
	cout << mensaje;
	return 1;
}

int desencriptar(string mensaje, int a) {

	string alphaL = "abcdefghijklmnopqrstuvwxyz1234567890-,.()ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
	int mensage_l = mensaje.length();
	for (int i = 0; i < mensage_l; i++) {
		for (int j = 0; j < alphaL.length(); j++) {
			if (mensaje[i] == alphaL[j]) {
				int result = modular_galo(j - a, alphaL.length());
				mensaje[i] = alphaL[result];
				break;
			}
		}

	}
	cout << mensaje;
	return 1;
}

int modular_galo(int a1, int b1) {
	int q = 0;
	int r = 0;

	if (a1 == b1) {
		return 0;
	}
	else if (a1 > 0) {
		while (a1 > b1) {
			a1 = a1 - b1;
			q++;
		}
		r = a1;
	}
	else {
		while (a1 < 0) {
			a1 = a1 + b1;
			q--;
		}
		r = a1;
	}

	return r;
}

int NEO_hack(string mensaje_por_romper) {
	bool done = 0;
	while (done != 1) {
		for (int i = 0; i < 26; i++) {
			cout << "Este mensaje tiene sentido? \n";
			desencriptar(mensaje_por_romper, i);
			cout << "\n";
			string confirmacion;
			getline(cin, confirmacion);
			if (confirmacion == "si") {
				done = 1;
				cout << "La clave usada en este codigo es: " << i;
				return 1;
			}
		}
		cout << "Esta seguro que el mensaje esta bien encriptado?";
		done = 1;
		return 1;
	}
	return 1;
}

int revision (string a, int x) {

	cout << "Ingrese '1' si quiere encriptar, '2' si quiere decriptar \no '3' si quiere romper un cifrado ";
	int choice;
	cin >> choice;
	cin.ignore();

	if (choice == 1) {
		encriptar(a, x);
	}
	else if (choice == 2) {
		desencriptar(a, x);
	}
	else if (choice == 3) {
		NEO_hack(a);
	}
	else {
		cout << "Ingrese un numero correcto\n";
		revision(a,x);
	}
	return 1;
}