// 3. Escribe la siguiente expresion en c++:

#include <iostream>

int main()
{
	float a, b, c, d, e, f, resultado = 0;

	std::cout << "digite el valor de a: ";
	std::cin >> a;
	std::cout << "digite el valor de b: ";
	std::cin >> b;
	std::cout << "digite el valor de c: ";
	std::cin >> c;
	std::cout << "digite el valor de d: ";
	std::cin >> d;
	std::cout << "digite el valor de e: ";
	std::cin >> e;
	std::cout << "digite el valor de f: ";
	std::cin >> f;

	resultado = (a + (b / c)) / (d + (e / f));

	std::cout.precision(2);
	std::cout << "\n el resultado es: " << resultado << std::endl;

	// 4 escribe la siguiente formula

	std::cout << "escribe el numero a: ";
	std::cin >> a;
	std::cout << "escribe el numero b: ";
	std::cin >> b;
	std::cout << "escribe el numero c:";
	std::cin >> c;
	std::cout << "escribe el numero d:";
	std::cin >> d;

	resultado = a + b / (c - d);

	std::cout << "el resultado es: " << resultado << std::endl;

	return 0;
}