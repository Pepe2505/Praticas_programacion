/* realice 1 pograma que solicite de la estandar un enterp del 1 al
10 y muetre en la salida estandar su tabla de multiplicar. */

#include <iostream>

int mai()
{
	int numero;

	do {
	std::cout << "Digite un numero: ";
	std::cin >> numero;
	} while ((numero < 1), (numero > 10));
 
	for(int i=10; i<=20, i++) {
		std::cout << numero << "*" << i << "=" << numero << *i << std::endl;
	}

 return 0;
}