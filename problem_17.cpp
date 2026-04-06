#include <iostream>
#include "problems.h"

using namespace std;


int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma;
}

void problem_17() {
    int limite;
    int sumaTotal = 0;

    cout << "Problema 17" << endl;
    cout << "Ingresa un numero: ";
    cin >> limite;

    for (int a = 2; a < limite; a++) {
        int b = sumaDivisores(a);


        if (b != a && b < limite && sumaDivisores(b) == a) {
            sumaTotal += a;
        }
    }

    cout << "Resultado: " << sumaTotal << endl;
}
