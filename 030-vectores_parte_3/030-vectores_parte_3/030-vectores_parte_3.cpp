/* 7. Realizae un pograma que defina dos vectores de carcteres y despues almacene el
contenido de ambos vectores en un nuevo vector, situando en ´primer lugar los elementos
del primer vector seguidos por los elementos del segundo vector. muestre el contenido del
nuevo vector en la salida estandar */

#include <iostream>
#include <conio.h>

int main()
{
	char letras1[] = { 'a', 'b', 'c','d', 'e'};
	char letras[] = { 'f', 'g', 'h', 'i', 'j' };
	char letras3[10];
	
	//copiando los elementos del letras1 hacia letras3
    for( int i=0; i<5; i++) {
		letras3[i] = letras1[1];
	}

	//copiado lo elementos de letra2 hacia letra3
	for(int i=5; i<10; i++) {
		letras3[i] = letras[i - 5];
	}

	//mostrar nuevo vector
	for(int i=0; i<10; i++) {
		std::cout << letras3[i] << std::endl;
	}

	return 0;
}