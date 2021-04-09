#include <iostream>
using namespace std;

int main()
{
    int a;
    int n;
    int q = 0;
    int r = 0;

    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese n: ";
    cin >> n;

    if (a > 0) {
        while (a > n) {
            a = a - n;
            q++;
        }
        r = a;
    }
    else {
        while (a < 0) {
            a = a + n;
            q--;
        }
        r = a;
    }
    

    cout << "Quotient: " << q << "\nRemainer: " << r ;
}

