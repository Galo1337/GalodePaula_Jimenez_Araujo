#include <iostream>
using namespace std;

void sinespacios(char* a);

int main()
{
    char a[100] = "Buenos dias amigos";
    cout << a << endl;

    char* p = a;

    sinespacios(p);

    cout << a << endl;

    return 1;

}

void sinespacios(char* p) {
    char space = ' ';
    int spacer = 0;
   
    for (*p; *p; p++) {
        if (*(p+spacer) == space) {
            spacer++;
        }
            *p = *(p + spacer);
    }

    cout << endl;
}


