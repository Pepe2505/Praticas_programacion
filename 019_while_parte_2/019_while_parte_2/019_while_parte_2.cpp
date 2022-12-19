/* La setencia do while
do{
  conjunto de instrucciones;
}while (exprexion logica);
*/

#include <iostream>
#include <stdlib.h>

int main ()
{
	int i;

	i = 10;

	do {
		std::cout << i << std::endl;
		i--; //dismunuye el iterador de uno en uno

	} while (i >= 1);

	system("pause");

	return 0;	 
}