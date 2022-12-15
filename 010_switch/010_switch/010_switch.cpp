/* la setencia de switch

swictch(exprexion)
{
 case literal1:
 conjuto de instruciones1;
 breack;
 case literal2:
 conjuto de instruciones2;
 breack;
 case literaln:
 conjuntos de instrucionesn;
 breack;
 defeault:
 conjuto de instruciones por defecto;
 breack
}
*/

#include <iostream>

int main()
{
	int numero;

	std::cout << "digite un numero entre 1-5";
	std::cin >> numero;

	switch(numero)
	{
	 case 1:
		 std::cout << "es el numero 1";
		 break;
	 case 2:
		 std::cout << "es el numero 2";
		 break;
	 case 3:
		 std::cout << "es el numero 3";
		 break;
	 case 4:
		 std::cout << "es el numero 4";
		 break;
	 case 5:
		 std::cout << "es el numero 5";
		 break;
	 default:
		 std::cout << "no esta del rango de 1-5";
		 break;
	}

	return 0;
}