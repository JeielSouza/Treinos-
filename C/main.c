/*Exponociando algo
lembrese, a condicao == ou =, não é aceita como condicao de para de um looping
Deu um trabalho chato para resolver, por conta dessa sintaxe maldita do C
 https://www.javatpoint.com/for-loop-in-c
https://www.programiz.com/c-programming/c-for-loop
O proximo desafio é fazer uma funcao com isso*/

#include <stdio.h>



int main()
{

  int numero;
  int expoente;
  int r = 1; 

  printf("Digite o Numero: ");
  scanf("%d", &numero);
  printf("Digite o Expoente: ");
  scanf("%d", &expoente);
  printf("\n");

printf("%d\n", expoente);
printf("%d\n", numero);

int i;


for (i = 1; i < expoente + 1; i++) 
{
  r = r * numero;
}

printf("Resultado: %d", r); 


  return 0;
}