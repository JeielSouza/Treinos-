#include <stdio.h>
#include <string.h>  

int main()
{

    char sex ; 


    float altura = 0;   
    float resul  = 0;  
    int value = 0;


    printf("Qual o sexo da pessoa?: ");
    scanf("%c", &sex);

    printf("Qual a altura da pessoa?: ");
    scanf ("%f", &altura);

     if (sex == ' ') 
    {
         resul = (72.7 * altura) - 58;
        printf("O peso ideial desse homen e: %0.2f", resul);
    }

    else if (sex == 'f')
    {
       
        resul = (62.1 * altura) - 44.7;
        printf("O peso ideial dessa mulher e: %0.2f", resul);

    }
    
    return 0; 
}
