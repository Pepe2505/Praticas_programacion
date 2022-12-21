/*15. Realice un pograma que solicite al usuario que piense un numero entero
entre el 1 y 100. el pograma debe generar un numero aletorio en ese mismo
el numero aletorio, asi hasta que lo adivine. y por ultimo mostrarle el numero
de intentos que le llevo

variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero, dato, contador = 0;
    int num_entero, fac_1, fac_2;

    srand(time(NULL)); //generar un numero aletorio;
    dato = 1 + rand() % (100); //25

    do {
        std::cout << "digite un numero: ";
        std::cin >> numero; //15

        if (numero > dato)
        {
            std::cout << "\n digite un numero menor \n";
        }
        if (numero < dato)
        {
            std::cout << "\n Digite un numero mayor \n";
        }
        contador++;
    } while (numero != dato);

    std::cout << "\n Felicidades adivinaste el numero \n";
    std::cout << "Numeros de intentos: " << contador << std::endl;

    /* Realize un pograma que calacule la
    descomposicion en factores primos de
    un numero entero*/

    std::cout << "\n Introdusca el numero que quieres factorizar";
    std::cin >> num_entero;

    num_entero = fac_1 * fac_2;
    std::cout << "el primer facto es: " << fac_1 << std::endl;
    std::cout << "el segundo factor es: " << fac_2 << std::endl;

    return 0;
}