// Potencia

#include <iostream>

int calcPotencia ( int numero, int potencia ) {
    int resultado = numero;

    for ( int i = 1 ; i < potencia ; i++ ) {
        resultado *= numero;
    }

    return resultado;
}

int main() {
    int numero      =   2;
    int elevadoA    =   2;

    std::cout << calcPotencia ( numero, elevadoA ) << std::endl;
	
    return 0;
}
