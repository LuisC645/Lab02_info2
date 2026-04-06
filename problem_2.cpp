#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void problem_2() {

    cout << "Problema 2" << endl;

    const int SIZE = 200;
    char arreglo[SIZE];

    srand(time(0));

    // Mayus aleatorias
    for (int i = 0; i < SIZE; i++) {
        arreglo[i] = 'A' + rand() % 26;
    }

    cout << "Arreglo: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arreglo[i];
    }
    cout << endl;

    // Contador
    int contador[26] = {0};

    for (int i = 0; i < SIZE; i++) {
        contador[arreglo[i] - 'A']++;
    }

    cout << "Resultado: " << endl;
    for (int i = 0; i < 26; i++) {
        if (contador[i] > 0) {
            cout << char('A' + i) << ": " << contador[i] << endl;
        }
    }
}
