#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "functions.h"

void Header () {
    printf("=============================\n");
    printf("= SEJA BEM- VINDO AO  Bin2Dez \n");
    printf("=============================\n ");
}

void Structure () {
    printf("======== \n");
    printf(" ATENCAO! INSTRUCOES:\n");
    printf("======== \n");
} 

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // Lê e descarta todos os caracteres restantes no buffer até encontrar uma nova linha ou o final do buffer
    }
}

int Validation (int PropsValidation) {
    int props = PropsValidation;
    int count = 0;

    // Falta fazer a validação

/*
    while (PropsValidation != 0) {
        int current  = 0;
        current = PropsValidation % 10; 

        if (current != 0 && current != 1) {
            printf("O VALOR NAO É BINARIO\n");
            printf("DIGITE NOVAMENTE: \n");
            clearBuffer();
            scanf("%d", &PropsValidation);
            Validation(PropsValidation);
        }

        PropsValidation /= 10; 
        count++;
    }
*/ 

    /*if(count == 8){
            printf("DIGITE APENAS 8 NUMEROS\n");
            printf("DIGITE NOVAMENTE: \n");
            scanf("%d",&PropsValidation);
            return Validation(PropsValidation);
    }
    */
   return props;
    
}

int BinaryToDecimal (int PropsBin){

    
    int bin = Validation(PropsBin);
    int dec = 0;
    int total = 0;
    int count = 0;

    while(bin != 0){
        int current = bin % 10;
        int multiplier = pow(2,count);

         dec = current * multiplier;
         total = total + dec;

        bin = bin / 10;
        count++;

        if( bin == 0){
            break;
        } 

    }
    printf("O Valor Decimal é: %d\n",total);
    return total;
}
