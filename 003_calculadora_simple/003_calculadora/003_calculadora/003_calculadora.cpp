/* 1. Escribe un pograma que lea de la entrada  estandar dos numeros y muestre
en la salida estandar su suma, resto, multiplicacion y division*/

#include <iostream>

int maoin()
{
	int n1, n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;

	std::cout << "Digite un numero:";
	std::cin >> n1;
	std::cout << "Digite otro numero:";
	std::cin >> n2;

	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division |= n1 / n2;

	std::cout << "\n La suma es: " << suma << std::endl;
	std::cout << "La resta es: " << resta << std::endl;
	std::cout << "la Multiplicacion es: " << multiplicacion << std::endl;
	std::cout << "La division es: " << division << std::endl;
	
	return 0;
}