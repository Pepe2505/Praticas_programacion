// 1. escribe la siguiente expresion com expresion en c++:

#include <iostream>

int main ()
{
	float a, b, c, d,  resultado = 0;

	std::cout << "Digite el valor a: ";
	std::cin >> a;
	std::cout << "Digite el valor b: ";
	std::cin >> b;

	resultado = (a / b) + 1;

	std::cout.precision(2);
	std::cout << "\n El resultado es: " << resultado << std::endl;

	// ejerccicio 2 escribe la sigiente exprecion a+b / c+d

	std::cout << "\n escribe el numero a:";
	std::cin >> a;
	std::cout << "escribe el numero b:";
	std::cin >> b;
	std::cout << "escribe el numero c: ";
	std::cin >> c;
	std::cout << "escribe el numero d: ";
	std::cin >> d;

	resultado = (a + b) / (c + d);

	std::cout.precision(2);
	std::cout << "\n el resultado es: " << resultado << std::endl;

	return 0;
}