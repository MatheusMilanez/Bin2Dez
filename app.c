#include <stdio.h>
#include "functions.h" // Inclui as definições de funções



int main() {
    int numero = 0;

    Header();
    Structure();
    scanf("%d", &numero);
    BinaryToDecimal(numero);

    return 0;   
}


