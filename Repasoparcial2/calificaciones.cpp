#include <iostream>
using namespace std;

int main (){

    char nota;

    cout << "Hola, por favor ingresa tu calificacion en formato estadounidense (A-F)" << endl;
    cin >> nota;

    switch (nota){

        case ('A'):{

            cout << "Su nota es excelente!" << endl;
            break;
        }

        case ('B'):{

            cout << "Su nota es buena" << endl;
            break;
        }

        case ('C'):{

            cout << "Su nota es aceptable" << endl;
            break;
        }

        case ('D'):{

            cout << "Su nota puede mejorar" << endl;
            break;
        }

        case ('E'):{

            cout << "Su nota no es buena" << endl;
            break;
        }

        case ('F'):{

            cout << "Su nota es mala" << endl;
            break;
        }

        case ('a'):{

            cout << "Su nota es excelente!" << endl;
            break;
        }

        case ('b'):{

            cout << "Su nota es buena" << endl;
            break;
        }

        case ('c'):{

            cout << "Su nota es aceptable" << endl;
            break;
        }

        case ('d'):{

            cout << "Su nota puede mejorar" << endl;
            break;
        }

        case ('e'):{

            cout << "Su nota no es buena" << endl;
            break;
        }

        case ('f'):{

            cout << "Su nota es mala" << endl;
            break;
        }

        default:

        cout << "El dato ingresado no es valido, por favor intente de nuevo." << endl;
        break;
    }


    return 0;
}