// 017_potencias.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Jose Antonio Ochoa Lopez

#include <iostream>

int main()
{
	float num, potencia, resultado;

	std::cout << "Escribe el numero que quieres elevar";
	std::cin >> num;
	std::cout << "\n Escribe las veces que lo quieres elevar";
	std::cin >> potencia;

	resultado = pow(num, potencia);
	std::cout << "\n el resultado es: " << resultado;

	return 0;
}

