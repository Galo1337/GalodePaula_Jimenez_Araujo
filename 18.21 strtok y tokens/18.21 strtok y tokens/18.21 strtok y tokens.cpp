#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

	cout << "Ingrese un string";
	string a;
	getline(cin, a);
	cout << endl;

    char str[] = "parrot,owl,sparrow,pigeon,crow";
    char delim[] = ",";
    cout << "The tokens are:" << endl;
    char* token = strtok(str, delim);
    while (token)
    {
        cout << token << endl;
        token = strtok(NULL, delim);
    }

        return 0;
}