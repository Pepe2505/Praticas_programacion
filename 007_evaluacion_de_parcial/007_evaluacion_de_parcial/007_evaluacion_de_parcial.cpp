/* 7. la calificacion final de un estudiante es la media de tres notas:
la nota de pratica cuenta un 30% del total, la nota teorica cuenta un
60% y la nota de participacines que cuenta el 10% restante. Escribe un pograma
que lea la entrada estandar las tres notas de u alumno y escriba en la
salida estandar su nota final. */

#include <iostream>

int main()
{
	float pratica, teorica, partcipacion, nota_final;
	int lado_a, cuadrado_a, lado_b, cuadrado_b, lado_c, cuadrado_c;

	std::cout << "digite la nota de pratica: ";
	std::cin >> pratica;
	std::cout << "Digite la nota pratica: ";
	std::cin >> teorica;
	std::cout << "Digite la nota de participacion: ";
	std::cin >> partcipacion;

	pratica *= 0.30;
	teorica *= 0.60;
	partcipacion *= 0.10;

	nota_final = pratica + teorica + partcipacion;

	std::cout << "\n La nota final es: " << nota_final;

	/* Escriba un pograma que lea de la
	entrada estandar de los dos catetos de un
	triangulo rectangulo y escriba en la
	salida estandar su hipotenusa*/

	std::cout << "\n escribe la medida del lado a";
	std::cin >> lado_a;
	std::cout << "escibe la medida del lado b";
	std::cin >> lado_b;
	
	cuadrado_a = lado_a * lado_a;
	cuadrado_b = lado_b * lado_b;

	std::cout << "\n el cuadrado del lado a es: " << cuadrado_a << std::endl;
	std::cout << "cual es el cuadrado del lado a: ";
	std::cin >> cuadrado_a;
	std::cout << "el cuadrado del la do b es: " << cuadrado_b << std::endl;
	std::cout << "cual es el cuadrado del lado b: ";
	std::cin >> cuadrado_b;

	cuadrado_c = cuadrado_a + cuadrado_b;

	std::cout << "\n el cuadrado de c es:" << cuadrado_c << std::endl;
	std::cout << "cual es el cuadrado de c: ";
	std::cin >> cuadrado_c;

	lado_c = (sqrt(cuadrado_c));

	std::cout << "\n la hipotenusa es: " << lado_c;

	 return 0;
}