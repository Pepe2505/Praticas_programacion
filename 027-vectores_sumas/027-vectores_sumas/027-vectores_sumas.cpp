/*1. Escribe un pograma que defina un vector de numeros y calcule la suma
de sus elementos*/

#include <iostream>
#include < conio.h>

int main()
{
	int numeros[5] = {1,2,3,4,5};
	int suma = 0;

	for(int i=0; i<5; i++) { //
		suma += suma + numeros[i];
	}

	std::cout << "La suma de los elementos del vector es: " << suma << std::endl;

	getch();
	return 0;
}