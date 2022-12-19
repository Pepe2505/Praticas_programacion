/* 11 Hacer un pograma que simule un cajero automatico con un saldo inicial
de 1000 dolares */

#include <iostream>

int main()
{
	int saldo_inicial = 1000, opc;
	float extra, saldo, retiro;

	int numero, cubo;
	float resultado = 0;

	std::cout << "\t Bienbenido a su casero automatico";
	std::cout << "1. ingrese dinero en tu cuenta ";
	std::cout << "2. Retirar dinero de la cuenta: ";
	std::cout << "3. salir";
	std::cin >> opc;

	switch (opc)
	{
	case 1:
		std::cout << "\n Digite la cantidad de dinero a ingresar: ";
		std::cin >> extra;
		saldo = saldo_inicial + extra;
		std::cout << "dinero en cuenta" << saldo;
		break;
	case 2:
		std::cout << "\n Digite la cantidad de dinero que va a retirar: ";
		std::cin >> retiro;
		if (retiro > saldo_inicial)
		{
			std::cout << "no tiene esa cantidad de dinero";
		}
		else {
			saldo = saldo_inicial - retiro;
			std::cout << "Dinero en cuenta:" << saldo;
		}
	case 3:
		break;
	}

	std::cout << "\n en este apartado vas a poder realizar 3 coasas";
	std::cout << "las tres opciones son  sacar el cubo de un numero, ver si un numero es par o es inpar y salir (1 es sacar el cubo de un numero, 2 ver si es par o no y 3 es salir)";
	std::cin >> opc;

	switch (opc)
	{
	  case 1:
		std::cout << "\n a que numero le quieres sacar al cubo: ";
		std::cin >> numero;
		cubo = pow(numero, 3);
		std::cout << "su cubo de este numero es:" << cubo << std::endl;
		break;
	  case 2:
		  std::cout << "\n que numero quieres saber si es par o no";
		  std::cin >> numero;
		  if(numero%2 ==0)
		  {
			  std::cout << "\n el numero es par";
			  std::cout << "\n ya que este numero es divisible entre 2:" << numero << std::endl;
		  }
		  else {
			  std::cout << "\n este numero es inpar";
			  std::cout << "\n ya que este numero no es divisible entre 2: " << numero << std::endl;
		  }
	  case 3:
		  std::cout << "\n vamos a salir de este pograma";
	}


	return 0;
}