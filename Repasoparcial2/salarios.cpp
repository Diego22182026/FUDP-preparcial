#include <iostream>
using namespace std;

int main (){

float salario, horas;

cout << "Hola, por favor ingresa cuanto te pagan por hora y las horas que trabajas: " << endl;
cin >> salario >> horas;

if (horas >= 40){
    salario = salario * 1.5;

    cout << "Tu salario total es de: " << salario << " " << "dolares la hora" << endl; 
}

else if (horas <=39){

    cout << "Tu salario total es de: " << salario << " " << "dolares la hora" << endl;
}
    return 0;
}