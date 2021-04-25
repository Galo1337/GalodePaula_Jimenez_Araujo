#include<iostream>
#include <vector>
#include <string>
#include <stdio.h>
using namespace std;
void print(vector <int> const& a);

int main() {

	int count;
	cout << "Inserte count (Cantidad de bits de los factores a multipliucar): ";
	cin >> count;
	cin.ignore();

	int count_variable = count;

	vector<int> A, M, Q; //  Val vez usar Bool?
	string A_string, M_string, Q_string; // Introduzco los bits como un string y luego los convierto a 1 o 0 en en vector
	bool Q_N = 0, QN_1 = 0; // Usaria Char pero char siempre esta en 8 bits, no en bits variables como pide la tarea 

	cout << "Ingrese M, el multiplicando: ";
	getline(cin, M_string);
	for (int i = 0; i < count; i++) {
		M.push_back(int(M_string[i]) - '0');
	}

	cout << "Ingrese Q, el multiplicador: ";
	getline(cin, Q_string);
	for (int i = 0; i < count; i++) {
		Q.push_back(int(Q_string[i]) - '0');
	}

	for (int i = 0; i < count; i++) { // Me salen valores negativos, no estoy seguro de como esta guardnado C++ los bits, tal vez deberia usar Bool para el vector
		A.push_back(~M.at(i));
	}

	while (count_variable != 0) { // Comienzo el while donde el count tiene que ser mayor a 0 para que se vuelva a entrar a bucle como se indica en el flowchart de la tarea 
		Q_N = M.at(0); // El valor mayor de Qn es el primer bit, osea el bit de mas a a la derecha 
		QN_1 = M.at(1); // Qn-1 seria el siguiente valor, en este caso en segundo valor contando desde la derecha
		if (true) { // Dentro de este bucle que es el trabajo tiene que ir las 3 condiciones, si los valores de Qn u Qn-1 son 00, 01/10 o 11. No he podido hacerlo por que el valor de M no se esta saliendo como 0 o 1, los operadore de bitwise no me funcionan
			break; // Tampoco sabria muy bien como hacer con el arithmetic right shift usando el formato que tengo de usar vectores, siento que para el trabajo se tiene que usar la libreria de bitset por que tan solo las funciones para hacer la suma de bits
			// En un formato de vector es bastate trabajoso
			// Si me queda claro que dentro de las 3 posibles opciones se altera el valor de n-bits de A
			// Es solo cuando Qn y QN-1 con iguales 00 o 11, que se hacer un Arithmetic Shift right en el valor de A y Q, que casualmente son los valore que determinan el resultado de la multiplicacion 
			// 
		}
		count_variable--;
	}

	cout << "A:"; // Esto deberia imprimir el valor de A, que cuando se une con el valor de Q revela el resultado, es bueno notar que con esta algortimo no se puede tener un overflow o underflow por que el numero de bits del resultado es el doble de los 2 numero que se estan multiplicando
	print(A);
	cout << "\n Q:";
	print(Q);

}

void print(vector <int> const& a) { // funcion para poder imprimir los vectores dado que las variables 
	for (int i = 0; i < a.size(); i++)
		cout << a.at(i) << ' ';
}

// https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/
// https://www.geeksforgeeks.org/computer-organization-booths-algorithm/#:~:text=Booth%20algorithm%20gives%20a%20procedure,number%20of%20additions%2Fsubtractions%20required.&text=The%20multiplicand%20is%20subtracted%20from,of%201's%20in%20the%20multiplier
// https://www.javatpoint.com/booths-multiplication-algorithm-in-coa
// Galo llorando de frustracion no entendiendo como hacer el algortimo.jpeg