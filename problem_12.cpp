#include <iostream>
#include <string>
#include "problems.h"

using namespace std;

void problem_12() {
    int n;
    cout << "Problema 12" << endl;
    cout << "Ingrese dimension de la matriz: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error" << endl;
        return;
    }

    // Crear matriz
    int** matriz = new int*[n];
    for (int i = 0; i < n; ++i) {
        matriz[i] = new int[n];
    }

    int* posicion = new int[n * n];
    int contadorElementos = 0;

    bool esMagico = true;

    cout << "Ingrese elementos de la matriz fila por fila:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matriz[i][j];

            // Num repetidos
            if (esMagico) {
                for (int k = 0; k < contadorElementos; ++k) {
                    if (posicion[k] == matriz[i][j]) {
                        cout << "Error: Numeros repetidos" << endl;
                        esMagico = false;
                        break;
                    }
                }
            }

            posicion[contadorElementos] = matriz[i][j];
            contadorElementos++;
        }
    }

    cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }

    if (!esMagico) {
        cout << "Matriz NO es un cuadrado magico" << endl;
    } else {

        int suma = 0;
        for (int j = 0; j < n; ++j) {
            suma += matriz[0][j];
        }

        // Suma filas
        for (int i = 0; i < n; ++i) {
            int sumaFila = 0;
            for (int j = 0; j < n; ++j) {
                sumaFila += matriz[i][j];
            }
            if (sumaFila != suma) esMagico = false;
        }

        // Suma cols
        for (int i = 0; i < n; ++i) {
            int sumaCol = 0;
            for (int j = 0; j < n; ++j) {
                sumaCol += matriz[j][i];
            }
            if (sumaCol != suma) esMagico = false;
        }

        // Suma diagonal 1 "\"
        int sumaDiag_1 = 0;
        for (int i = 0; i < n; ++i) {
            sumaDiag_1 += matriz[i][i];
        }
        if (sumaDiag_1 != suma) esMagico = false;

        // Suma diagonal 2 /
        int sumaDiag_2 = 0;
        for (int i = 0; i < n; ++i) {
            sumaDiag_2 += matriz[i][n - 1 - i];
        }
        if (sumaDiag_2 != suma) esMagico = false;

        if (esMagico) {
            cout << "La matriz es un cuadrado magico. La suma es: " << suma << endl;
        } else {
            cout << "La matriz NO es un cuadrado magico" << endl;
        }
    }

    // Liberar memoria
    for (int i = 0; i < n; ++i) {
        delete[] matriz[i];
    }
    delete[] matriz;
    delete[] posicion;
}
