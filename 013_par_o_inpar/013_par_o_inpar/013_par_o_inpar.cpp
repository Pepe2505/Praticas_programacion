/* realice un pograma que lea un valor entero y determina si se trata de un 
numero par o impar*/

#include <iostream>

int main()
{
	int numero;

	std::cout << "digite un numero: ";
	std::cin >> numero;

	if(numero%2 ==0)
	{
		std::cout << "\n el numero es par";
	}
	else {
		std::cout << "\n el numero es impar";
	}

	std::cout << "\n escribe un numero para ver si es divisible entre 3";
	std::cin >> numero;

	if(numero%3 == 0)
	{
		std::cout << "\n el numero si es divisble entre 3";
	}
	else {
		std::cout << "\n el numero no es divisible entre 3";
	}

	/* comprobar si numero escrito por el
	usuario es positivo o negativo*/

	std::cout << "\n escribe un numero ya sea positivo o negativo para obserbar que íensa el algoritmo";
	std::cin >> numero;

	if(numero < 0)
	{
		std::cout << "es numero es negativo\n";
	}
	else
	{
		std::cout << "el numero es positivo\n";
	}


	return 0;
}