/*1. Hacer un pograma para rellenar una matriz pidendo el numero de filas
y columnas, posteriormente mostraz'r la matriz en pantalla. */

#include <iostream>
#include <conio.h>

int main()
{
    int numeros[100][100], filas, columnas;

    std::cout << "digite el numero de filas: ";
    std::cin >> filas;
    std::cout << "digite el numero de columna: ";
    std::cin >> columnas;

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << "Digite un numero [" << i << "] [" << j << "]";
            std::cin >> numeros[i][j];
        }
        std::cout << "\n";
    }

    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            std::cout << "[" << numeros[i][j] << "]";
        }
        std::cout << "\n";
    }
    return 0;
}


