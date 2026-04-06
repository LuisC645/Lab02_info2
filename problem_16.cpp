#include <iostream>
#include "problems.h"

using namespace std;

// Llama a esta función desde tu main principal
void problem_16() {
    int n;

    cout << "Problem 16" << endl;
    cout << "Ingrese el numero n: ";
    cin >> n;

    if (n < 0) {
        cout << "El numero debe ser positivo." << endl;
        return;
    }

    // Ejemplo: para una malla 20x20 hay 137,846,528,820 caminos.
    unsigned long long caminos = 1;

    // Combinatoria
    for (int i = 1; i <= n; ++i) {
        caminos = caminos * (n + i) / i;
    }

    cout << "Para una malla de " << n << "x" << n << " puntos hay " << caminos << " caminos" << endl;
}
