#include <iostream>
#include <string>
using namespace std;

int encriptar(string mensaje, int a);
int desencriptar(string mensaje, int a);

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
				int result = (j + a) % 26;
				mensaje[i] = alphaL[result];
				break;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (mensaje[i] == alphaU[j]) {
				int result = (j + a) % 26;
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
				int result = (j - a) % 26;
				mensaje[i] = alphaL[result];
				break;
			}
		}
		for (int j = 0; j < 26; j++) {
			if (mensaje[i] == alphaU[j]) {
				int result = (j - a) % 26;
				mensaje[i] = alphaU[result];
				break;
			}
		}

	}
	cout << mensaje;
	return 1;
}