/* 3. escribe un pograma que lea de la entrada estandar de un vector de numeros y
muestre en la salida estandar los numeros del vector con sus indices asociados. */

#include <iostream>
#include <conio.h>

int main()
{
	int numero[100], n;

	std::cout << "digite el numero";
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cout << "Digite un numero: ";
		std::cin >> numero[i]; //Guarda todos los vectores
	}
	//Ahora, vamos a mostrar los elementos con sus indices asociados

	for (int i = 0; i < n; i++) {
		std::cout << "-> " << numero[i];
	}

	return 0;
}