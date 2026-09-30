/**
 * Proyecto: MisGustos - Tecnologias (Examen 1er Parcial)
 * Lenguaje: C++
 * Descripcion: Programa interactivo que gestiona un arreglo estatico, una matriz 2x3
 *              y una Pila dinamica utilizando std::vector.
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Funcion para transformar el arreglo estatico (6 elementos) en una matriz de 2x3
void matriz(const string arreglo[], int filas, int columnas) {
    cout << "\n--- MATRIZ 2x3 DE TECNOLOGIAS ---" << endl;
    string m[2][3];
    int index = 0;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            m[i][j] = arreglo[index++];
            cout << "[" << m[i][j] << "] ";
        }
        cout << endl;
    }
}

// Funcion para gestionar la Pila: carga los 6 elementos y agrega 2 adicionales.
void pila(const string arreglo[], int tam) {
    vector<string> stackPila;

    // Cargar los elementos iniciales del arreglo estatico
    for (int i = 0; i < tam; i++) {
        stackPila.push_back(arreglo[i]);
    }

    // Agregar dos valores adicionales solicitados por la rubrica
    stackPila.push_back("Rust");
    stackPila.push_back("TypeScript");

    cout << "\n--- ESTADO DE LA PILA (LIFO - Last In, First Out) ---" << endl;
    cout << "(Cima de la pila al final)" << endl;
    for (int i = stackPila.size() - 1; i >= 0; i--) {
        cout << " | " << stackPila[i] << " |" << endl;
    }
    cout << " +---------+" << endl;
}

// Funcion para imprimir los valores finales
void imprimirValoresFinales(const string arreglo[], int tam) {
    cout << "\n--- VALORES FINALES DEL ARREGLO ESTATICO ---" << endl;
    for (int i = 0; i < tam; i++) {
        cout << i + 1 << ". " << arreglo[i] << endl;
    }
}

int main() {
    // Declaracion del arreglo estatico de 6 valores STRING predefinidos
    string tecnologias[6] = { "C++", "Python", "Java", "Docker", "Linux", "Git" };
    int opcion = 0;

    // Ciclo para mantener el programa ejecutandose hasta que el usuario decida salir
    do {
        cout << "\n========================================" << endl;
        cout << "    PROYECTO: MisGustos [TuNombre]      " << endl;
        cout << "========================================" << endl;
        cout << "1. Mostrar Arreglo Estatico de Tecnologias" << endl;
        cout << "2. Ejecutar Funcion Matriz (2x3)" << endl;
        cout << "3. Ejecutar Funcion Pila (+ 2 elementos)" << endl;
        cout << "4. Imprimir Valores Finales" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";

        if (!(cin >> opcion)) {
            cout << "Entrada invalida. Por favor, ingrese un numero." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (opcion) {
        case 1: {
            cout << "\n--- ARREGLO ESTATICO INICIAL ---" << endl;
            for (int i = 0; i < 6; i++) {
                cout << "- " << tecnologias[i] << endl;
            }
            break;
        }
        case 2:
            matriz(tecnologias, 2, 3);
            break;
        case 3:
            pila(tecnologias, 6);
            break;
        case 4:
            imprimirValoresFinales(tecnologias, 6);
            break;
        case 5:
            cout << "\nSaliendo del programa... ¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while (opcion != 5);

    return 0;
}