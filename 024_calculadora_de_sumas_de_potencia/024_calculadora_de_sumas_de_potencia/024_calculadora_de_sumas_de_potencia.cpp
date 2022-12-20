//11. Escribe un pograma que calcule el valor de: 2^1 + 2^2 + 2^3 + ... 2^n

#include <iostream>
#include <stdlib.h>
#include <math.h>

int main()
{
	int suma = 0, elevacion = 0, n;
	int n1, n2, n3, n4, n5, n6, resultado;

	std::cout << "Digite el numero de elementos a sumar: ";
	std::cin >> n;

	for (int i=1; i<n; i++)
	{
		elevacion = pow(2, i);
		suma += elevacion;
	}

	std::cout << "\n la suma total es: " << suma << std::endl;

	std::cout << "\n escribe 6 numeros: ";
	std::cin >> n1;
	std::cin >> n2;
	std::cin >> n3;
	std::cin >> n4;
	std::cin >> n5;
	std::cin >> n6;

	resultado = n1 + n2 + n3 - n4 + n5 - n6;
	std::cout << "el resultado es: " << resultado << std::endl;

	return 0;
}