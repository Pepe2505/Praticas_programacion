/* 3. hacer una matriz de tipo entera de 2 * 2, llenar de numeros y luego copiar todo
su contenido hacia otra matriz. */

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numero[2][2] = {{1,2},{3,4}};
	int matriz[2][2];

	int nums[100][100], filas, columnas;

	for(int i=0; i<2; i++) {
	 for (int j=0; j<2; j++) {
		 matriz[i][j] = numero[i][j];
	 }
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			std::cout << matriz[i][j];
		}
		std::cout << "\n";
	}

	std::cout << "\n pon el numero de filas que quieres";
	std::cin >> filas;
	std::cout << "pon el numero de columna que quieres";
	std::cin >> columnas;

	int a, b, matriz_2[3][3];
	srand(time(0));
	for (a = 0; a < 3; a++) {
	  for (b = 0; b < 3; b++) {
		  matriz_2[a][b] = rand() % 10 + 1;
	  }

	}

	int a, b, matriz_2[3][3];
	srand(time(0));
	for (a = 0; a < 3; a++) {
		for (b = 0; b < 3; b++) {
			printf("%d", matriz[a][b]);

		}

	}

	return 0;
}