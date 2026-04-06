#include <iostream>
#include <string>
#include <problems.h>
using namespace std;

void problem_6() {
    string cadena;
    string resultado = "";

    cout << "Problema 6" << endl;
    cout << "Ingresa texto: ";
    cin >> cadena;


    for (int i = 0; i < (int)cadena.length(); i++) {
        // Mayus
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            resultado += (char)(cadena[i] - ('a' - 'A'));
        } else {
            // Si tiene otro simbolo lo deja
            resultado += cadena[i];
        }
    }

    cout << "Original    : " << cadena << endl;
    cout << "Mayuscula: " << resultado << endl;
}
