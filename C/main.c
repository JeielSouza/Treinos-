#include <stdio.h>

int main()
{
    int num = 0; 
    int negado;
    int desloc; 
    
 
    printf("Escreva seu numero: ");
    scanf("%d", &num);
    num = num << 2; 
    negado = ~num; 
    desloc = num >> 1; 
    printf("O numero agora e: %d\n", num);
    printf("O numero com negacap fica igual a: %d\n", negado);
    printf("O numero deslcoado fica igual a: %d", desloc);



    return 0; 
}