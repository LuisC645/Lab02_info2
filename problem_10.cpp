#include <iostream>
#include <string>
#include <problems.h>
using namespace std;

void problem_10() {
    string romano;
    int total = 0;
    bool valido = false;

    cout << "Problema 10" << endl;

    // Asumimos que la variable valido fue declarada antes como: bool valido = false;
    while(!valido){
        cout << "Ingresa un numero romano: ";
        cin >> romano;

        valido = true;

        for(int i = 0; i < (int)romano.length(); i++){
            if(!((romano[i] >= 'a' && romano[i] <= 'z') || (romano[i] >= 'A' && romano[i] <= 'Z'))){
                valido = false;
                break;
            }
        }

        if(valido){
            for (int i = 0; i < (int)romano.length(); i++) {
                if (romano[i] >= 'a' && romano[i] <= 'z') {
                    romano[i] = romano[i] - ('a' - 'A');
                }
            }
        } else {
            cout << "Error" << endl;
        }
    }

    for (int i = 0; i < (int)romano.length(); i++) {
        int actual = 0;
        int siguiente = 0;

        // Denominación
        if (romano[i] == 'M') {
            actual = 1000;
        } else if (romano[i] == 'D') {
            actual = 500;
        } else if (romano[i] == 'C') {
            actual = 100;
        } else if (romano[i] == 'L') {
            actual = 50;
        } else if (romano[i] == 'X') {
            actual = 10;
        } else if (romano[i] == 'V') {
            actual = 5;
        } else if (romano[i] == 'I') {
            actual = 1;
        } else {
            cout << "Error: No es romano, es asiatico" << endl;
            return;
        }

        if (i + 1 < (int)romano.length()) {
            if (romano[i + 1] == 'M') {
                siguiente = 1000;
            } else if (romano[i + 1] == 'D') {
                siguiente = 500;
            } else if (romano[i + 1] == 'C') {
                siguiente = 100;
            } else if (romano[i + 1] == 'L') {
                siguiente = 50;
            } else if (romano[i + 1] == 'X') {
                siguiente = 10;
            } else if (romano[i + 1] == 'V') {
                siguiente = 5;
            } else if (romano[i + 1] == 'I') {
                siguiente = 1;
            } else {
                cout << "Error: No es romano, es persa" << endl;
                return;
            }
        }

        if (actual < siguiente) {
            total = total - actual;
        } else {
            total = total + actual;
        }
    }

    cout << "Numero ingresado: " << romano << endl;
    cout << "Numero arabico: " << total << endl;

}


