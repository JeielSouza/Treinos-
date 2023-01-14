#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*ESQUELEO COMPLETAMENT FUNCIONAL DO PROJETO OFICIAL!
NOTA-SE QUE O PROJETO OFICIAL TEM MUITOS ERROS DE SINTAXE.
AGORA É SO AJEITA LA AS OPERACOES E NOMEAR DE FORMA DECENTE AS VARIAVEIS. 

OLHAR COMO HOTZ ORGANIZA O CODIGO


ATUALIZACAO: CODIGO FUNCIONAL, SO FALTA DESCONFUNDIR AS VARIAVEIS

ATUALIZACAO FINAL: CODIGO 100% FUNCIONAL

FALTA DOCUMENTAR DE FORMA DEFINITIVA, POIS ESTOU COM PREGUIÇA AGORA

BASICAMENTE, O PROGAMA É FEITO PARA DECORAR OPERACOES DE SOMA, PARA GENTE COMO EU, QUE ACHA ISSO SUPER NECESSARIO */

int main()
{
    int menu = 1; 
    int resposta = 0; 

    while (menu == 1)

    {

        printf("Qual opcao? ");
        scanf("%d", &resposta);

            if (resposta == 1)
            {
                
                    int i;
                    int num[10];
                    int positivo = 0; 
                    int resp = 0;
                    int x = 0;
                    int y = 0;
                    int result = 0;
                    int tabu = 0;

                    srand(time(NULL));

                    for (i = 0; i < 10; i++) 

                        {
                        num[i] = (rand() % 11);   // a divisao de qualquer numero aleatorio por 11 da qualquer numero entre 0 e 10. 
                                                // ao descorbrir esse numero. o algoritmo acrecenta mais 1. so nao sei ao certo como que da 1 as vezes. 
                                                // a essa altura o array de 10 espacos ja foi preenchido com a ordem pseudo aleatoria. 
                        if (num[i] > 0)
                        {
                        positivo += 1;
                        }

                        }

                    printf("DIGITE DE QUAL TABUADA VAI FAZER O TREINO: ");       // digitamos qual numero vamos treinar a soma. 
                    scanf("%d", &tabu);
                                                

                    for (i = 0; i < 10; i++)                        
                    
                    {
                        printf("%d + %d = ", tabu, num[i]);               // damos inicio a colocacao e calculo automatico para esse numeros
                        scanf("%d", &resp);                                // x + y ?? 
                                                                            // em seguida, digita o resultado, ele comapra para saber ser esta certo e reporta uma resposta. 

                        x = tabu;
                        y = num[i];
                        result = x + y;                        // o resultado e calculado aqui 
                        
                
                        if (resp == result)                   // a resposta digitada e comparada com o resultado aqui. 
                        {
                        printf("CORRETO!\n");  
                        }
                        else 
                        {
                        printf("ERRADO!\n");
                        }


    }

            }
            else if(resposta == 2)
            {
                                int t,d,f,p;           // X  = T           y = d        z = f     u = p

                                int i;

                                printf("Digite o valor de X: ");
                                scanf("%d", &t);
                                printf("Digite o valor de Y: ");
                                scanf("%d", &d);

                                f = t + d;



                                for (i = 0; i < 50; i++)
                                {

                                printf("QUANTO E %d + %d : ", t, d);
                                scanf("%d", &p);

                                if (p == f)
                                {
                                    printf("CORRETO\n");

                                }
                                else
                                {
                                    printf("ERRADO\n");
                                }

                                }



            }

                    printf("\n");
                    printf("DESEJA CONTINUAR? (1 / 0) ");
                    scanf("%d", &menu);
    }

        printf("\n");
        printf("FIM DO PROGAMA !");

    return 0; 
}