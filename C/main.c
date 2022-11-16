#include <stdio.h>

int main()
{

   char name1[20]; // string do primeiro nome
   char name2[20]; // string do segundo nome
   int idade;      // idade do usuario 



   printf("DIGITE SEU PRIMEIRO NOME: ");
   scanf("%s", &name1);                         // ler primeiro nome
   printf("DIGITE SEU SEGUNDO NOME: ");
   scanf("%s", &name2);
   printf("\n");                                // ler segundo nome
   printf("DIGITE A SUA IDADE: ");
   scanf("%d", &idade);                        // ler a idade

   printf("\n");

   printf("Bem vindo %s %s\n\n", name1, name2);            //exibe os dados com essa minha cambiarra

   printf("\n");

   if (idade != 23)                           // caso a idade digitada seja diferente de 23, exiba a mensagem
   {
      printf("Nao tens idade suficiente para isso!!");
   }
   else 
   {                                                   // se a idade for 23 exiba: 
      printf("Os seus %d servem. ", idade);
   }
    
   return 0;
}
