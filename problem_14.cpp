#include <iostream>
#include "problems.h"

using namespace std;

void problem_14() {

    cout << "Problema 14" << endl;

    const int n = 5;
    int matriz[n][n];
    int contador = 1;

    // Crear matriz
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] = contador++;
        }
    }

    cout << "Matriz" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "Matriz Rotada 90 Grados" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[n - 1 - j][i] << "  ";
        }
        cout << endl;
    }

    cout << "Matriz Rotada 180 Grados" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[n - 1 - i][n - 1 - j] << "  ";
        }
        cout << endl;
    }

    cout << "Matriz Rotada 270 Grados" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[j][n - 1 - i] << "  ";
        }
        cout << endl;
    }
}
