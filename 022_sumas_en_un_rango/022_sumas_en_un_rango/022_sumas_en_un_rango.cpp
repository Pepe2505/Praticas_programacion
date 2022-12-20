/*5. Escriba un pograma que lea valores enteros hasta que se introduzca un
valor en el rango (20 - 30) o se introdusca el valor cero. el pograma debe
entregar la suma de los valores mayores a 0 introducidos. */

#include <iostream>
#include <stdlib.h>

int main()
{
	int numero, suma = 0;

	do {
		std::cout << "Digite un numero: ";
		std::cin >> numero;
	} while ((numero < 20), (numero > 30)); (numero != 0);

	std::cout << "\n La suma es: " << suma << std::endl;

	return 0;
}