// Soma de matrizes
// http://mundoeducacao.bol.uol.com.br/matematica/adicao-subtracao-matrizes.htm

#include <iostream>

int matrizA[][2] = {
    { 5, 4 },
    { 0, 2 },
    { 1, -1 }
};

int matrizB[][2] = {
    { 0, -2 },
    { 5, -3 },
    { -1, 0 }
};

int calcMatriz ( int a[], int b[] ) {
    for ( int i = 0; i < 2 ; i++ ) {
        std::cout << "  " << a[i] + b[i];
    }

    std::cout << std::endl;
    return 0;
}

int main() {
    int tamanho = ( sizeof(matrizA) / sizeof(matrizA[0]) );

    for ( int i = 0 ; i < tamanho ; i++ ) {
        std::cout << "Resultado do calculo (index: " << i << ")" << std::endl;
        calcMatriz ( matrizA[i], matrizB[i] );
    }

    return 0;
}
