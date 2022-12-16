/* 9. cambiar un numero entero con el mismo valor pero en romanos.
M = 1000, D = 500, C = 100, L = 50, X = 10, V = 5, I = 1
*/

#include <iostream>

int main()
{
	int numero, unidades, decenas, centenas, u_millar,
		int mes, u_mes, d_mes;

	std::cout << "Digite un numero: ";
	std::cin >> numero;
    // numero= 2152 -> 2000 + 100 + 50 + 2

	unidades = numero % 10; numero = numero / 10; //unidaddes = 2, numero 215
	decenas = numero % 10; numero = numero / 10; // decenas = 5, numero = 21
	centenas = numero % 10; numero = numero / 10; // centenas = 1, numero = 2
	u_millar = numero % 10; numero = numero / 10; // u_millar = 2, numero = 0

	switch (u_millar)
	{
	  case 1:
		  std::cout << "M";
		  break;
	  case 2:
		  std::cout << "MM";
		  break;
	  case 3:
		  std::cout << "MMM";
		  break;
	}

	switch(centenas)
	{
	 case 1:
		 std::cout << "C";
		 break;
	 case 2:
		 std::cout << "CC";
		 break;
	 case 3:
		 std::cout << "CCC";
		 break;
	 case 4:
		 std::cout << "CD";
		 break;
	 case 5:
		 std::cout << "D";
		 break;
	 case 6:
		 std::cout << "DC";
		 break;
	 case 7:
		 std::cout << "DCC";
		 break;
	 case 8:
		 std::cout << "DCCC";
		 break;
	 case 9:
		 std::cout << "CM";
		 break;
	}

	switch (decenas)
	{
	case 1:
		std::cout << "X";
		break;
	case 2:
		std::cout << "XX";
		break;
	case 3:
		std::cout << "XXX";
		break;
	case 4:
		std::cout << "XL";
		break;
	case 5:
		std::cout << "L";
		break;
	case 6:
		std::cout << "XL";
		break;
	case 7:
		std::cout << "XLL";
		break;
	case 8:
		std::cout << "XLLL";
		break;
	case 9:
		std::cout << "XC";
		break;
	}

	switch (unidades)
	{
	case 1:
		std::cout << "I";
		break;
	case 2:
		std::cout << "II";
		break;
	case 3:
		std::cout << "III";
		break;
	case 4:
		std::cout << "IV";
		break;
	case 5:
		std::cout << "V";
		break;
	case 6:
		std::cout << "VI";
		break;
	case 7:
		std::cout << "VII";
		break;
	case 8:
		std::cout << "VIII";
		break;
	case 9:
		std::cout << "IX";
		break;
	}

	std::cout << "\n piensa en un mes del año y escribelo con su numero";
	std::cin >> mes;

	u_mes = numero % 10; numero = numero / 10; // unidad = 2; numero = 1;
	d_mes = numero % 10; numero = numero / 10; // decena 1; numero = o;

	switch (d_mes)
	{
	case 1: 
		std::cout << "X";
		break;
	default:
		std::cout << "solo recibe la decena 10";
	}

	switch (u_mes)
	{
	case 1:
		std::cout << "I";
		break;
	case 2:
		std::cout << "II";
		break;
	case 3:
		std::cout << "III";
		break;
	case 4:
		std::cout << "IV";
		break;
	case 5:
		std::cout << "V";
		break;
	case 6:
		std::cout << "VI";
		break;
	case 7:
		std::cout << "VII";
		break;
	case 8:
		std::cout << "VIII";
		break;
	case 9:
		std::cout << "IX";
		break;
	}

	return 0;
}