#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int main() {

	gcd(3, 1);

	return 1;
}