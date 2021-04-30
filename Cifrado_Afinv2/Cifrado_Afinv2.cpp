#include <iostream>
#include <string>
using namespace std;

int encriptar(string mensaje_original, int a, int b);
int desencriptar(string mensaje_original, int a, int b);
int modular_galo(int a1, int b1);
int revision(string mensaje_original, int a, int b);
int gcd(int a, int b);

int main() {

	int a;
	cout << "Ingrese a (constante de decimacion): ";
	cin >> a;

	int b;
	cout << "Ingrese b (constante de desplasamiento): ";
	cin >> b;


	cin.ignore();

	cout << "Ingrese el mensaje que quiera encriptar o decriptar: ";
	string mensaje_original;
	getline(cin, mensaje_original);

	revision(mensaje_original, a ,b);
}

int encriptar(string mensaje_original, int a, int b) {
	string alphaL = "abcdefghijklmnopqrstuvwxyz1234567890-,.()ABCDEFGHIJKLMNOPQRSTUVWXYZ ";	// mod n
	int mensage_l = mensaje_original.length();
	for (int i = 0; i < mensage_l; i++) {
		for (int j = 0; j < alphaL.length(); j++) {
			if (mensaje_original[i] == alphaL[j]) { // j es la posicion en el alphabeto de la leta, a = 0, b = 1 , c = 2 . . . . . etc 
				int result = modular_galo((j*a)+b, alphaL.length());
				mensaje_original[i] = alphaL[result];
				break;
			}
		}

	}
	cout << mensaje_original;
	return 1;
}

int desencriptar(string mensaje_original, int a, int b) {
	string alphaL = "abcdefghijklmnopqrstuvwxyz1234567890-,.()ABCDEFGHIJKLMNOPQRSTUVWXYZ ";	// mod n
	int n = 0;
	while (modular_galo(a * n, alphaL.length()) != 1) {
		n++;
	}
	int mensage_l = mensaje_original.length();
	for (int i = 0; i < mensage_l; i++) {
		for (int j = 0; j < alphaL.length(); j++) {
			if (mensaje_original[i] == alphaL[j]) { // j es la posicion en el alphabeto de la leta, a = 0, b = 1 , c = 2 . . . . . etc 
				int result = modular_galo(n * (j - b), alphaL.length());
				mensaje_original[i] = alphaL[result];
				break;
			}
		}

	}
	cout << mensaje_original;
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

int revision(string mensaje_original, int a, int b) {
	string alphaL = "abcdefghijklmnopqrstuvwxyz1234567890-,.()ABCDEFGHIJKLMNOPQRSTUVWXYZ ";	// mod n

	if (gcd(a,alphaL.length()) != 1) {
		cout << "El maximo comun divisor no es igual a 1, asi que no se podra hacer un descifrado\n";
	}

	cout << "Ingrese '1' si quiere encriptar, '2' si quiere decriptar ";
	int choice;
	cin >> choice;
	cin.ignore();

	if (choice == 1) {
		encriptar(mensaje_original,a,b);
	}
	else if (choice == 2) {
		desencriptar(mensaje_original, a, b);
	}
	else {
		cout << "Ingrese un numero correcto\n";
		revision(mensaje_original, a, b);
	}
	return 1;
}

int gcd(int a, int b)
{
	if (a == 0) {
		return b;
	}
	return gcd(modular_galo(b,a), a);
}