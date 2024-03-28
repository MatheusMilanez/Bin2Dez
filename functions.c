#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"

void Header () {
    printf("=============================\n");
    printf("= SEJA BEM- VINDO AO  Bin2Dez \n");
    printf("=============================\n ");
}

int BinaryToDecimal (){
    int bin = 1010;
    int dec = 0;
    int total = 0;
    int count = 0;

    while(bin != 0){
        int current = bin % 10;
        int multiplier = pow(2,count);

         dec = current * multiplier;
         total = total + dec;

        bin  /= 10;
        count++;

        if( bin == 0){
            printf("O Valor Decimal é: %d\n",total);
            break;
        } 

    }
}
