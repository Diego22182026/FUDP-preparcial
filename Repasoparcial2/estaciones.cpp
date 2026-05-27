#include <iostream>
using namespace std;

int main (){

    int n;

    cout << "Hola, por favor escoge una opcion: " << endl;
    cout << "1)" << endl;
    cout << "2)" << endl;
    cout << "3)" << endl;
    cout << "4)" << endl;
    cin >> n;
    cout << "Opcion elegida: " << n << endl;

    switch (n){

        case (1):{

            cout << "Primavera";
            break;
        }

        case (2):{

            cout << "Verano" << endl;
            break;
        }

        case (3):{

            cout << "Otono" << endl;
            break;
        }

        case (4):{

            cout << "Invierno" << endl;
            break;

            default:

            cout << "Opcion invalida, por favor intente de nuevo" << endl;
        }

    }

    return 0;
}