#include <iostream>
using namespace std;

int suma(int a, int b);
int resta(int a, int b);
int multi(int a, int b);


int main()
{
	int *p = &suma;
}

int suma(int a, int b) {
	return a + b;
}

int resta(int a, int b) {
	return a - b;
}

int multi(int a, int b) {
	return a * b;
}