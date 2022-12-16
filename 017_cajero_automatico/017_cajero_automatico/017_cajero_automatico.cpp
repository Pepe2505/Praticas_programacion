/* 11 Hacer un pograma que simule un cajero automatico con un saldo inicial
de 1000 dolares */

#include <iostream>

int main()
{
	int saldo_inicial = 1000, opc;
	float extra, saldo;

	std::cout << "\t Bienbenido a su casero automatico";
	std::cout << "1. ingrese dinero en tu cuenta ";
	std::cout << "2. Retirar dinero de la cuenta: ";
	std::cout << "3. salir";
	std::cin >> opc;

	switch (opc)
	{
	  case 1:
		  std::cout << "Digite la cantidad de dinero a ingresar: ";
		  std::cin >> extra;
		  saldo = saldo_inicial + extra;
		  std::cout << "dinero en cuenta";
		  break;
	  case 2:
	  case 3:
	}

	return 0;
}