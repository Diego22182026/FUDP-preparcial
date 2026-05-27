#include <iostream>
using namespace std;


int main (){

    int n;

    cout << "Por favor, ingresa un numero: ";
    cin >> n;

    if (n < 0){

        cout << "Tu numero es negativo." << endl;
    }

    else if (n == 0){

        cout << "Tu numero es 0." << endl;
    }

    else if (n > 0){

        cout << "Tu numero es positivo."<< endl;
    }

    return 0;
}
