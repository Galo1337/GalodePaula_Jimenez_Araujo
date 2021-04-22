#include <iostream>
using namespace std;

int modular_galo(int a1, int b1);

int main()
{

    cout << "Ingrese a: ";
    int a;
    cin >> a;
    cout << "Ingrese n: ";
    int n;
    cin >> n;  

    cout << "\nRemainer: " << modular_galo(a,n);
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
