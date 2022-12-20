/* hacer un pograma de sumas de los cuadrados*/

#include <iostream>

int main ()
{
	float lado_a, lado_b, cuadrado_de_c;
	float temperatura_1, temperatura_2, temperatura_3, temperatura_4, temperatura_5, temperatura_6, media;

	std::cout << "escribe los lados a y b: ";
	std::cin >> lado_a;
	std::cin >> lado_b;

	cuadrado_de_c = (pow(lado_a, 2) + pow(lado_b, 2));
	std::cout << "\nel cuadrado de c es: " << cuadrado_de_c << std::endl;

	std::cout << "\nescribe 6 temperaturas";
	std::cin >> temperatura_1;
	std::cin >> temperatura_2;
	std::cin >> temperatura_3;
	std::cin >> temperatura_4;
	std::cin >> temperatura_5;
	std::cin >> temperatura_6;

	media = (temperatura_1 + temperatura_2 + temperatura_3 + temperatura_4 + temperatura_5 + temperatura_6) / 6;
	std::cout << "el promedio de la temperatura es: " << media << std::endl;


	return 0;
}