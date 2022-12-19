/* La setencia while: 
while (exprexion logica)
{
 conjunto de instruciones;
}
*/

#include <iostream>

int main ()
{
	int i;
	int x;

	i = 1; 
	x = 15;

	while (i <= 10)
	{
		std::cout << i << std::endl;
		i++;
	}

	while (x<=1500)
	{
		std::cout << x << std::endl;
		x+15;
	}

	return 0;
}