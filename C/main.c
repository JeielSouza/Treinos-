#include <stdio.h>

int main()
{
    int array[5] = {21, 42, 53, 62, 53};
    int i; 

    for(i = 0; i < 5; i++)
    {
        printf("ENDERECO DE MEMORIA ARRAY[%d] = %p\n", i, &array[i]);

    }

    printf("\n\n");
    
    for(i = 0; i < 5; i++)
    {
        printf("ENDERECO DE MEMORIA ARRAY[%d] = %p\n", i, array[i]);

    }


    printf("\n\n");

        printf("ENDERECO DE MEMORIA ARRAY = %p\n", array);





    return 0; 
}