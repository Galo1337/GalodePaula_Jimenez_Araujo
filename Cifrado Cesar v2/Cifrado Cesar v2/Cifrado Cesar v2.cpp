#include <iostream>
#include <string>
using namespace std;

int encriptar(string mensaje, int a);
int desencriptar(string mensaje, int a);
int modular_galo(int a1, int b1);

int main() {
	int x;
	cout << "Ingrese la llave que quiera usar: ";
	cin >> x;
	cin.ignore();

	cout << "Ingrese el mensaje que quiera encriptar o decriptar: ";
	string a;
	getline(cin, a);

	int choice;
	cout << "Ingrese 1 is quiere encriptar, 2 si quiere decriptar: ";
	cin >> choice;

	if (choice == 1) {
		encriptar(a, x);
	}
	else {
		desencriptar(a, x);
	}
}

int encriptar(string mensaje, int a) {

	string alphaL = "abcdefghijklmnopqrstuvwxyz";
	string alphaU = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int mensage_l = mensaje.length();
	for (int i = 0; i < mensage_l; i++) {
		for (int j = 0; j < 26; j++) {
			if (mensaje[i] == alphaL[j]) {
				int result = modular_galo(j+a,26);
				mensaje[i] = alphaL[result];
				break;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (mensaje[i] == alphaU[j]) {
				int result = modular_galo(j + a, 26);
				mensaje[i] = alphaU[result];
				break;
			}
		}

	}
	cout << mensaje;
	return 1;
}

int desencriptar(string mensaje, int a) {

	string alphaL = "abcdefghijklmnopqrstuvwxyz";
	string alphaU = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int mensage_l = mensaje.length();
	for (int i = 0; i < mensage_l; i++) {
		for (int j = 0; j < 26; j++) {
			if (mensaje[i] == alphaL[j]) {
				int result = modular_galo(j - a, 26);
				mensaje[i] = alphaL[result];
				break;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (mensaje[i] == alphaU[j]) {
				int result = modular_galo(j - a, 26);
				mensaje[i] = alphaU[result];
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

	if (a1 > 0) {
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
