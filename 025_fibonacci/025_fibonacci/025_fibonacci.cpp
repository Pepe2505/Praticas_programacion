//13. Hacer uno que realize la serie de fibonacci -> 1, 1, 2, 3, 5, 6, 13, ..., n

#include <iostream>

int main()
{
	int n, x = 0, y = 1, z = 1;

	std::cout << "digite el numero de elementos: ";
	std::cin >> n;

	std::cout << "1";
	for(int i=1; i<=n; i++)
	{
		z = x + y; //1 2 3 5
		std::cout << z << ""; //1 2 3 5
		x = y; //1 1 2
		y = z; //1 2 3
	}



	return 0;
}