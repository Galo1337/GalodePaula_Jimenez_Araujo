#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

	string mensaje = "";
	string mensaje_con_asteriscos = "";
	int j = 0;
	vector<string> v1{};

	cout << "Ingrese una cadena de caracteres: "; // Ingresa la cadena 
	string a;
	getline(cin, a);
	cout << endl;

	cout << "Ingrese el numero de caracteres por bloque: "; // Ingresa la separacion pro bloques 
	int bloque;
	cin >> bloque;

	int largo_cadena = a.length();
	int division = (largo_cadena + bloque -1) / bloque;

	for (int k= 0; k < division; k++) { // Cada distancia de bloque imprime la porcion de cadena
		for (int i = 0; i < bloque; i++) {
			if (j < largo_cadena) {
				mensaje = mensaje + a[j];
				j++;
			}
			else {
				mensaje = mensaje + "X";
				j++;
			}
		}
		cout << mensaje;
		mensaje_con_asteriscos = mensaje_con_asteriscos + "*" + mensaje; // Suma al mensaje con asteriscos
		v1.push_back(mensaje); // Suma al vector 
		mensaje = ""; // Reinicia el mensaje
		cout << endl;
	}
	mensaje_con_asteriscos.erase(0,1);
	cout << "mensaje con asteriscos:" << mensaje_con_asteriscos << "\n"; //Imprime mensaje con asteriscos

	cout << "Impresion de vector: \n"; // Imprime el vector
	for (int z = 0; z < v1.size(); z++) {
		cout << v1[z] << "\n";
	}
}


