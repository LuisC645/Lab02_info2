#include <iostream>
#include <string>
#include <problems.h>

using namespace std;


void problem_4() {
    string cadena;
    int resultado = 0;
    int inicio = 0;
    bool negativo = false;


    cout << "Ingresa numero: ";
    cin >> cadena;


    if (cadena[0] == '-') {
        negativo = true;
        inicio = 1;
    }


    for (int i = inicio; i < (int)cadena.length(); i++) {
        if (cadena[i] < '0' || cadena[i] > '9') {
            cout << "Error: '" << cadena[i] << "' no es numero" << endl;
            return;
        }
        resultado = resultado * 10 + (cadena[i] - '0');
    }


    if (negativo) {
        resultado = -resultado;
    }


    cout << "Original: " << cadena  << endl;
    cout << "Entero: " << resultado << endl;
}
