#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool gano = 0;
    int perder = 0;
    string hang = "0\n-|-\n|\n--";

    cout << "Ingrese una palabra para jugar al ahoracado: ";
    string palabra_ahorcado;
    cin >> palabra_ahorcado;
    int largo_palabra = palabra_ahorcado.length();
    string palabra_X (largo_palabra, 'x');
    
    while (gano == 0) {
            for (int i = 0; i < largo_palabra; i) {
                if (perder == 7) {
                    cout << "Perdiste";
                    break;
                }
                else {
                    cout << "Adivine la palabra: ";
                    cout << palabra_X;
                    cout << " \nIngrese una letra: ";
                    char letra;
                    cin >> letra;
                    if (palabra_ahorcado[i] == letra) {
                        cout << "Acertaste \n\n";
                        palabra_X[i] = letra;
                        i++;
                    }
                    else {
                        cout << "Error \n\n";
                        cout << hang.substr(0, perder);
                        perder++;
                    }

                }

            }
            if (perder != 7) {
                gano = 1;
            }
            break;
        }
    if (gano == 1) {
        cout << "Ganaste";
    }
}

