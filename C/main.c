#include <stdio.h>

int main()

{
    int Inteiro = 21;
    float Flutu = 32.5;
    double Doubre = 31254123.53531; 
    char Caracte = 'C';

    int Numero = 312;
    int* PtNumero = &Numero; 

    printf("%d\n", Inteiro);
    printf("%0.2f\n", Flutu);
    printf("%lf\n", Doubre);
    printf("%c\n", Caracte);

    printf("%d\n", Numero);          // var numero
    printf("%p\n", PtNumero);           // posica que o ponteiro aponta
    printf("%d\n", *PtNumero);        // valor que esta na posicao que o ponteiro aponta. 

    return 0; 
}