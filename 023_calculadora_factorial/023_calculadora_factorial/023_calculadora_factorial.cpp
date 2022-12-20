//9. Escribe un pograma que calcule el valor de: 1*2*3...*n (factorial)

// 5! = 5*4*3*2*1

#include <iostream>
#include <stdlib.h>

int main()
{
    int numero, factorial = 1;
    int num_factoriales, num_factoriales_2, num_factoriales_3, fac, resultado;
    
    std::cout << "Digite un numero: ";
    std::cin >> numero;
    
    for(int i = 1; i <= numero; i++) {
        factorial = factorial * i;
    }
    
    std::cout << "\n el factorial del numero es:  " << factorial << std::endl;

    // Escribe un pograma que calcule el valor de: 1! + 2! + 3! + ... + n!

    std::cout << "\n escribe tres numeros: ";
    std::cin >> num_factoriales;
    std::cin >> num_factoriales_2;
    std::cin >> num_factoriales_3;

    for (int x = 1; x <= numero; x++) {
        fac = fac * x;
        resultado = num_factoriales + num_factoriales_2 + num_factoriales_3;
    }

    system("pause");
    return 0;
}