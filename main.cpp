#include <iostream>
#include "problems.h"
using namespace std;

int main()
{

    bool active = true;

    while(active){

        char num[50];
        int data = 0;
        bool entradaValida = false;

        while (!entradaValida) {
            cout << "Escoja el problema (pares): ";
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
                cout << "Error: Por favor ingrese un numero valido" << endl;
            } else if (temporal % 2 == 0 || temporal == 1 || temporal == 17){
                data = temporal;
                entradaValida = true;
            } else {
                cout << "Error: Por favor ingrese un numero valido" << endl;
            }
        }


        switch (data) {

        case 1:
            problem_1();
            break;

        case 2:
            problem_2();
            break;

        default:
            break;
        }

    }



    return 0;
}
