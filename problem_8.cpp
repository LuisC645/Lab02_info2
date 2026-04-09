#include <iostream>
#include <string>
#include <problems.h>
using namespace std;


void problem_8() {
    string cadena;
    string texto = "";
    string numeros = "";

    cout << "Problema 8" << endl;
    cout << "Ingresa texto: ";
    cin >> cadena;


    // Separación
    for (int i = 0; i < (int)cadena.length(); i++) {
        if (cadena[i] >= '0' && cadena[i] <= '9') {
            numeros += cadena[i];
        } else {
            texto += cadena[i];
        }
    }

    cout << "Original: " << cadena << endl;
    cout << "Texto: " << texto << endl;
    cout << "Numero: " << numeros << endl;
}
