#include <stdio.h>

/*
Crie um programa que contenha um array de inteiros contendo 5 elementos. 
Utilizando apenas aritm´ etica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
*/

void dobra(int *a){*a *= 2;}

int main()
{
    int array[5], *p = array;

    for(int i = 0; i < 5; i++)
    {
        printf("Valor %d: ", i);
        scanf("%d", (p + i));
        dobra(p + i);
    }
    printf("\nValor dobrado: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("Valor %d: %d\n", i, p[i]);
    }
    return 0;
}