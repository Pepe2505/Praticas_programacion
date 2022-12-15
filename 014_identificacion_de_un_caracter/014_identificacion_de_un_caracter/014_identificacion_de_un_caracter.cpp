/* 5.escriba un pograma que lea la entrada estandar de un carcter e indique
en la salida estandar si el carcter es una vocal o no. */

#include <iostream>

int main () 
{
	char letra, l_vocal_mayu;

	std::cout << "digite un caracter";
	std::cin >> letra;

	switch(letra)
	{
	  case 'a':
		  std::cout << "es una vocal";
		  break;
	  case 'e': 
		  std::cout << "es una vocal";
		  break;
	  case 'i':
		  std::cout << "es una vocal";
		  break;
	  case 'o':
		  std::cout << "es una vocal";
		  break;
	  case 'u':
		  std::cout << "es una vocal";
		  break;
	  default:
		  std::cout << "no es una vocal";
		  break;
	}

	std::cout << "\n escribe una vocal ya sea (mayuscula o miniscula)";
    std::cin >> l_vocal_mayu;

	switch (l_vocal_mayu)
	{
	 case 'A':
		 std::cout << "es una vocal mayuscula";
		 break;
	 case 'E':
		 std::cout << "es una vocal mayuscula";
		 break;
	 case 'I':
		 std::cout << "es una vocal mayuscula";
		 break;
	 case 'O':
	     std::cout << "es una vocal mayuscula";
			 break;
	 case 'u':
		 std::cout << "es una vocal mayuscula";
		 break;
	 default:
		 std::cout << "es una vocal minuscula";
		 break;
	}

	return 0;
}
