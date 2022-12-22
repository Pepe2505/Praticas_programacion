/* 5. Desarrolla un pograma que lea la entrada estandar un vector de enteros
y termine el mayor elemento del vector. */

#include <iostream>
#include <conio.h>

int main()
{
    int numero[100], n, mayor = 0;
    std::cout << "Digite un numero de elementos del arreglo: ";
    std::cin >> n;

    for (int i=0; i<n; i++) {
        std::cout << i + 1 << ". Digite un numero: "; //1. Digite un numero:
        std::cin >> numero[i];

        // 1 2 3 10 5
        if(numero[i] > mayor) {
            mayor = numero[i]; //1 2 3 4 10 5
        }
    }

    std::cout << "\n el mayor elemento del vector es: " << mayor << std::endl;

    return 0;
}