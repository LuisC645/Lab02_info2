#include <iostream>
#include <string>
#include "problems.h"

using namespace std;

void problem_18() {
    long long n;
    cout << "Problema 18" << endl;
    cout << "Ingrese el numero n: ";
    cin >> n;

    if (n <= 0 || n > 3628800) {
        cout << "Error, muy grande" << endl;
        return;
    }

    long long n_original = n;
    n = n - 1;

    int factoriales[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

    string digitos = "0123456789";
    string resultado = "";

    for (int i = 9; i >= 0; --i) {

        int indice = n / factoriales[i];

        resultado += digitos[indice];

        string nuevosDigitos = "";
        for (int j = 0; j < digitos.length(); ++j) {
            if (j != indice) {
                nuevosDigitos += digitos[j];
            }
        }
        digitos = nuevosDigitos;

        n = n % factoriales[i];
    }

    cout << "La permutacion numero " << n_original << " es: " << resultado << "." << endl;
}
