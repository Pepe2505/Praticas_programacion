/* 9 Realice un pograma que calcule el valor que toma la siguente funcion para 
unos valores dados de x e y: */

#include <iostream>
#include <math.h>

int main()
{
	float x, y, resultado = 0;
	float a, b, c, resultado_2;

	std::cout << "digite el valor de x: ";
	std::cin >> x;
	std::cout << "digite el valor de y: ";
	std::cin >> y;

	resultado = (sqrt(x)) / (pow(y,2)-1);

	std::cout << "\n El resultado es: " << resultado << std::endl;

	// expresion para la formula general

	std::cout << "escriba el valor de a: ";
	std::cin >> a;
	std::cout << "escriba el valor de b: ";
	std::cin >> b;
	std::cout << "escriba el valor c: ";
	std::cin >> c;

	resultado_2 = -b (sqrt(pow(b, 2) - (4 * a * c)) / (2 * a);

	return 0;
}