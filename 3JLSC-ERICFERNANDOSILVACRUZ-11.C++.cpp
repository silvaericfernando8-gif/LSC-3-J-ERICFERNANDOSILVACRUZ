// 3JLSC-ERICFERNANDOSILVACRUZ-11.C++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int sumaRecursiva(int n) {
    n = abs(n);
    if (n <= 9)
        return n;
    else
        return sumaRecursiva(n / 10) + (n % 10);
}

int sumaIterativa(int n) {
    n = abs(n);
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int cantidadNumeros = 0;

    cout << "¿Cuántos números va a ingresar? ";
    cin >> cantidadNumeros;

    for (int i = 1; i <= cantidadNumeros; ++i) {
        int numero;
        cout << "\nIngrese el número " << i << ": ";
        cin >> numero;

        cout << "Suma de dígitos (Recursiva): " << sumaRecursiva(numero) << endl;
        cout << "Suma de dígitos (Iterativa): " << sumaIterativa(numero) << endl;
    }

    return 0;
}