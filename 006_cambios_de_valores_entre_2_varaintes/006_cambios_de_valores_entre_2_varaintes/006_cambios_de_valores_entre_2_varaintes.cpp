/* 5. escribe un fragmento de pograma que intercambie los valores de dos
variables. */

#include <iostream>

int main()
{
	int x, y, aux;
	float a, b, c, d, resultado = 0;

	std::cout << "Digite el valor de x: ";
	std::cin >> x;
	std::cout << "digite el valor de y: ";
	std::cin >> y;

	aux = x;
	x = y;
	y = aux;

	std::cout << "\n el nuevo valor de x es: " << x << std::endl;
	std::cout << "el nuevo valor de y es: " << y << std::endl;

    // escribe un algoritmo que calcule la media de calificacion de 4 peronas

	std::cout << "escribe la calificacion del primer alumno: ";
	std::cin >> a;
	std::cout << "escriba la calificacion del segundo alumno: ";
	std::cin >> b;
	std::cout << "escribe la calificacion del tercer alumno: ";
	std::cin >> c;
	std::cout << "escribe la calificacion del ultimo alumno: ";
	std::cin >> d;

	resultado = (a + b + c + d) / 4;

	std::cout.precision(2);
	std::cout << "la media de calificacion es: " << resultado << std::endl;

	return 0;
}