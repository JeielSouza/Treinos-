#ifndef FUNC_H
#define FUNC_H
#include<stdio.h>

void emcremento (int * pont)
{

    printf("O POINT APONTA PARA: %d\n", *pont );   // mostra qual o valor que esta armazenado na memoria que pont esta apontando!
    printf("O ENDERECO DE MEMORIA DE PONT E: %d\n", &pont); // mostra o endereco de memoria da variavel ponteiro pont !
    printf("\n");
    printf("POS INCREMENTO: ");
    printf("\n");                                      
    printf("O POINT AGORA VALE: %d\n", ++*pont );  // incrementa mais um no valor que esta armazenado na variavel que pont esta apontando 
    printf("O ENDERECO DE POINT E:  %d\n", &pont ); // ah sei la man
    printf("O POINT APONTA PARA O ENDERECO: %p", pont );
}


#endif