/* Escribe un pograma  que soloicite una edad (un entero) e indique en la
salida estandar si la edad introducida esta en el rango (18 - 25)*/

#include <iostream>

int main()
{
	int edad;
	int num_1, num_2, num_3, num_4;

	std::cout << "Digite su edad: ";
	std::cin >> edad;
	// 18-19-20-21-22-23-24-25

	if((edad>=18)&&(edad<=25))
	{
		std::cout << "\n su edad esta en el rango de (18 - 25)";
	}
	else {
		std::cout << "\n su edad no esta en dicho rango";
	}

	/* Escribe un pograma que lea de la entrada
	estandar tres numeros. Despues
	debe leer un cuarto numero e indicar si el
	numero coincide con alguno de los
    introducidos con anterioridad*/

	std::cout << "\n porfavor introdusca 3 numeros al azar";
	std::cin >> num_1;
	std::cin >> num_2;
	std::cin >> num_3;
	std::cout << "\n tu primer numero es: " << num_1 << std::endl;
	std::cout << "tu segundo numero es: " << num_2 << std::endl;
	std::cout << "tu ultimo numero de esta lista es: " << num_3 << std::endl;

	std::cout << "\n escribe el cuarto numero aqui";
	std::cin >> num_4;
	std::cout << "\n con este cuarto numero vamos a buscar si es igual a uno de los tres numeros anteriores que escribiste";
	std::cout << "el numero 4 es: " << num_4 << std::endl;

	if((num_4 = num_1)&&(num_4 = num_2)&&(num_4 = num_3))
	{
		std::cout << "\n el numero es igual a uno de los tres numeros que escribiste";
	}
	else 
	{
		std::cout << "tu cuarto numero es difernte a los demas numero";
	}
	
	return 0;
}