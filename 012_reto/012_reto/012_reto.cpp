/* escriba un pograma que lea tres numeros y cual de ellos es el mayor */

#include <iostream>

int main()
{
	int a, b, c;

	std::cout << "escribe el primer numero: ";
	std::cin >> a;
	std::cout << "escribe el segundo numero: ";
	std::cin >> b;
	std::cout << "escribe el tercer numero: ";
	std::cin >> c;

	if(a < b, c)
	{
		std::cout << "\n el numero mayor es: " << a;
	}
	  else if(b < a, c)
	  {
		std::cout << "el numero mayor es: " << b << std::endl;
	  }
	    else if(c < a, b)
	    {
		 std::cout << "el numero mayor es: " << c << std::endl;
	    }

	
	 return 0;
}    