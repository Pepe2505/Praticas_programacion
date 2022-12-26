// Cadenas de caracteres

#include<iostream>
#include<conio.h> 
#include<string.h>

int main()
{
	char palabra[] = "Alejandro";
	char palabra2[] = { 'A', 'l', 'e', 'j', 'a', 'n', 'd', 'r', 'o' };
	char nombre[30];
	
	std::cout << "Digite su nombre";
	std::cin >> nombre;

	std::cout << palabra << std::endl;
	std::cout << palabra2 << std::endl;

	return 0;
}