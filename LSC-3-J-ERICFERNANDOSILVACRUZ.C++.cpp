#include <iostream>

using namespace std;

// Encabezado - Variable global
const int NUMERO_GLOBAL = 8;

// Funciones Secundarias
int sumatoria(int numero_local) {
    // Memoria estática mediante arreglo de tamaño fijo con la constante global
    int arreglo_numeros[NUMERO_GLOBAL];
    int resultado = 0;
    int resultado2 = 0;

    for (int i = 0; i < numero_local; i++) {
        cout << "ingrese el valor de la posicion: ";
        cin >> arreglo_numeros[i];

        resultado = resultado + arreglo_numeros[i];
        resultado2 += arreglo_numeros[i];
    }

    return resultado;
}

// Funcion Principal
int main() {
    cout << "Actividad 02 - Sumatoria Acumulativa - Memoria Estatica" << endl;
    int resultado_main = sumatoria(NUMERO_GLOBAL);
    cout << "El resultado de la sumatoria es igual a: " << resultado_main << endl;

    return 0;
}