/*1. escribe un pograma que lea dos numeros y determine cual de ellos es
el mayor */

# include <iostream>

int main()
{
	int n1, n2, n3, n4;

	std::cout << "digite un numero: ";
	std::cin >> n1;
	std::cout << "digite otro numero: ";
	std::cin >> n2;

	if(n1 > n2) {
		std::cout << "el mayor numero es: " << n1;
	}
	else {
		std::cout << "el mayor numero es: " << n2;
	}

	std::cout << "\n digite 2 numeros: ";
	std::cin >> n3, n4;

	if(n3 < n4) {
		std::cout << "el mayor numero es: " << n3;
	}
	else {
		std::cout << "el mayor numero es: " << n4;
	}

	return 0;
}