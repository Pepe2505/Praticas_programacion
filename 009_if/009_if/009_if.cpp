/* La setencia de if 

if (ondicion)
{
instruciones1;
}
else{ 
  instrucciones 2;
}
*/

#include <iostream>

int main()
{
	int numero, dato = 5;

	std::cout << "digite un numero: ";
	std::cin >> numero;

	if (numero == dato)
	{
		std::cout << "el numero es 5";
	}
	else {
		std::cout << "el numero es diferente de 5";
	}

	return 0;
}