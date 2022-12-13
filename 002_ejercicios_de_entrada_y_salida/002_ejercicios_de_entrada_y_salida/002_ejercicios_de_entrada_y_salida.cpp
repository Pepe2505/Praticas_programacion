/*3. Realize un pograma que lea de la entrada estandar los siguientes datos de
una persona: 

edad: dato de tipo entero 
sexo: dato de tipo caracter 
altura en metros: dato de tipo real

tras leer los datos, el pograma debe mostrarlos en la salida estandar*/

#include <iostream>

int main ()
{
	int edad;
	char sexo[10];
	float altura;

	std::cout << "Digite su edad: ";
	std::cin >> edad;
	std::cout << "Digite su sexo: ";
	std::cin >> sexo;
	std::cout << "Digite su altura en metros: ";
	std::cin >> altura;

	std::cout << "\n Edad:" << edad << std::endl;
	std::cout << "sexo: " << sexo << std::endl;
	std::cout << "Altura en metros: " << altura << std::endl;
}