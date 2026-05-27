#include <iostream>
using namespace std;

int main (){

    int edad;

    cout << "Por favor ingrese su edad: ";
    cin >> edad;

    if (edad <18 && edad >=0){

        cout << "Usted es menor de edad" << endl;
    }

    else if (edad >=18 && edad <=59){

        cout << "Usted es un adulto" << endl;
    }

    else if (edad >=60){

        cout << "Usted es un adulto mayor" << endl;
    }

    else

        cout << "Edad invalida, por favor intente de nuevo." << endl;


    return 0;
}