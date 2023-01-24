/*PARTE FINAL, PONTEIROS UDEMY, ERRO NA AULA*/
#include <stdio.h>

int main()
{

    int array[5] = {13, 23, 53 , 4 , 5};
    int i; 

    for (i = 0; i < 5; i++)
    {   
        printf("O VALOR DO ARRAY[%d] = %p\n O TAMANHO EM BYTS E = %ld\n\n", i, array[i], sizeof(array[i]));
        printf("ENDERECO ARRAY[%d] = %p\n", i, &array[i]);
    }
        printf("\n\n O VALOR DO ARRAY[0] = %d\n O ENDERECO DE MEMORIA DO ARRAY[0] = %p\n", array[0], &array[0]);
        printf("\n O VALOR DO *(ARRAY) = %d\n O ENDERECO DE MEMORIA DO *(ARRAY) = %p\n", (*array), (*array));
         printf("\n O VALOR DO *(ARRAY) + 1 = %d\n O ENDERECO DE MEMORIA DO *(ARRAY) + 1 = %p\n", (*array+1), (*array+1));
         printf("\n O VALOR DO *(ARRAY) + 2 = %d\n O ENDERECO DE MEMORIA DO *(ARRAY) + 2 = %p\n", (*array+2), (*array+2));
    return 0; 
}

/*NÃO é querendo ser chato, nem ter o ego alto para corrigir o professor, mas é notavel que nessa ultima aula ele claramente
interpretrou errado o livros C moderno e descomplicado, a questão é que no exemplo do curso ele usa um array sequencial:
1 2 3 4 5  

e Depois faz essas declaracoes em printf: 
 printf("\n O VALOR DO *(ARRAY) + 1 = %d\n O ENDERECO DE MEMORIA DO *(ARRAY) + 1 = %p\n", (*array+1), (*array+1));
 printf("\n O VALOR DO *(ARRAY) + 2 = %d\n O ENDERECO DE MEMORIA DO *(ARRAY) + 2 = %p\n", (*array+2), (*array+2)); 
 ELE afirma que com isso, voce esta sequencialmente acessando o endereco de memoria do e os velores do vetor, soque nao esta, 
 voce esta simplesmente colocando +1 no valor do primeiro. simplesmente isso 
 Os enderecos são aleatorios, e a unica parte que seria igual, seria se fizessemos: 
 printf("ENDERECO DE MEMORIA DO ARRAY[0] = %p", &array[0]")
printf("ENDERECO DE MEMORIA DO ARRAY = %p", array")

AI SIM, seria igual, pois C cria um ponteiro que aponta para o primeiro elemento, e vai apontando sequencialmente de acordo com o tamanho
do tipo de dado, para se localizar.

Exemplo: Se for um array de tipo inteiro levando em conta que 1 int tem 4 byts = 32 bits: 
array = 0x7A > O endereco do ponteiro principal 
&array[0] = 0x7A > O endereco do primeiro elemento > 122          == > VEMOS que é alocado de 4 EM 4 byts. pois o armazenamento da memoria trabalha com bytes
&array[1] = 0x7E > Endereco do segundo elemento >   126                mas da para saber que la no fundo sao bits, enfim
&array[2] = 0X82 > Endereco do terceiro elemento >  130


*/           