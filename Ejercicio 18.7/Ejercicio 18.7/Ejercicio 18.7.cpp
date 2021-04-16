#include <iostream>
#include <string>
using namespace std;

int encriptar(string mensaje);
int desencriptar(string mensaje);

int main() {
	cout << "Ingrese el mensaje que quiera encriptar o decriptar: ";
	string a;
	getline(cin, a);

	int choice;
	cout << "Ingrese 1 is quiere encriptar, 2 si quiere decriptar: ";
	cin >> choice;

	if (choice == 1) {
		encriptar(a);
	}
	else {
		desencriptar(a);
	}
}

int encriptar(string mensaje) {

	string alphaL = "abcdefghijklmnopqrstuvwxyz";
	string alphaU = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int mensage_l = mensaje.length();
	for (int i = 0; i < mensage_l; i++) {
		for (int j = 0; j < 26; j++) {
			if (mensaje[i] == alphaL[j]) {
				int result = (j + 13) % 26;
				mensaje[i] = alphaL[result];
				break;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (mensaje[i] == alphaU[j]) {
				int result = (j + 13) % 26;
				mensaje[i] = alphaU[result];
				break;
			}
		}

	}
	cout << mensaje;
	return 1;
}

int desencriptar(string mensaje) {

	string alphaL = "abcdefghijklmnopqrstuvwxyz";
	string alphaU = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int mensage_l = mensaje.length();
	for (int i = 0; i < mensage_l; i++) {
		for (int j = 0; j < 26; j++) {
			if (mensaje[i] == alphaL[j]) {
				int result = (j - 13) % 26; // Tengo que revisar usando modulo con numero negativo
				mensaje[i] = alphaL[result]; // Trate de usar absolute value pero cada "pasada" me quita un numero al superar 26 o vice versa, tengo que hacer mi propia funcion
				break;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (mensaje[i] == alphaU[j]) {
				int result = (j - 13) % 26;
				mensaje[i] = alphaU[result];
				break;
			}
		}

	}
	cout << mensaje;
	return 1;
}