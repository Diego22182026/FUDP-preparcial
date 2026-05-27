#include <iostream>
using namespace std;

int main (){

    int N, i = 2;

    cout << "Por favor, ingresa un numero: ";
    cin >>N;

    cout << i << endl;
    while (i < N){
        
        i = i + 2;
        cout << i << endl;

    }

    return 0;
}