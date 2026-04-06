#include <iostream>
#include "problems.h"

using namespace std;

void problem_1() {

    cout << "Problema 1" << endl;

    char num[50];
    int cantidad = 0;
    bool entradaValida = false;

    while (!entradaValida) {
        cout << "Ingrese la cantidad de dinero (entero): ";
        cin >> num;

        bool soloDigitos = true;
        int temporal = 0;

        for (int i = 0; num[i] != '\0'; i++) {

            if (num[i] < 48 || num[i] > 57) {
                soloDigitos = false;
                break;
            }

            temporal = (temporal * 10) + (num[i] - 48);
        }

        if (!soloDigitos) {
            cout << "Error: Por favor ingrese un numero entero sin letras ni decimales." << endl;
        } else {
            cantidad = temporal;
            entradaValida = true;
        }
    }

    // Lógica
    cout << "50000 : " << cantidad / 50000 << endl;
    cantidad %= 50000;

    cout << "20000 : " << cantidad / 20000 << endl;
    cantidad %= 20000;

    cout << "10000 : " << cantidad / 10000 << endl;
    cantidad %= 10000;

    cout << "5000  : " << cantidad / 5000 << endl;
    cantidad %= 5000;

    cout << "2000  : " << cantidad / 2000 << endl;
    cantidad %= 2000;

    cout << "1000  : " << cantidad / 1000 << endl;
    cantidad %= 1000;

    cout << "500   : " << cantidad / 500 << endl;
    cantidad %= 500;

    cout << "200   : " << cantidad / 200 << endl;
    cantidad %= 200;

    cout << "100   : " << cantidad / 100 << endl;
    cantidad %= 100;

    cout << "50    : " << cantidad / 50 << endl;
    cantidad %= 50;

    cout << "Faltante: " << cantidad << endl;
}
