/* REVISANDO PONTEIROS */
#include <stdio.h>
#include "func.h"

int main()
{

    int numero = 23; 
    emcremento(&numero); // emcremento recebe o espaco de numero;
    printf("\n");
    printf("O ENDERECO DE MEMORIA DE NUMERO E: %d", &numero );



    return 0; 
}