#include <stdio.h>

int main()
{

int inteiro = 321; 
float flutuante = 23.423;
double dobro = 32131414.5352;
char caractere = 'z';

char* letra = &caractere;


printf("Seu numero inteiro e: %d\n", inteiro);
printf("Seu numero flutuante ou real e: %0.3f\n", flutuante);
printf("Seu numero double e: %0.2lf\n", dobro);
printf("O caractere que voce quer ver e: %c\n", caractere);
printf("O tamanho da varaivel inteiro e: %lu\n\n", sizeof(inteiro));


printf("-------------APONTADO------------\n");
printf("A letra do caractere e: %c\n", caractere);
printf("A sua pocisao na memoria e: %p\n", letra);
printf("A letra que o ponteiro esta apontando no endereco da memoria e: %c", *letra);


return 0;
}

