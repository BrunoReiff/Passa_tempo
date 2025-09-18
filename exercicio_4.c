#include <stdio.h>

/*
Fac¸a um programa que leia dois valores inteiros e chame uma func¸˜ ao que receba estes 2 valores de entrada 
e retorne o maior valor na primeira vari´ avel e o menor valor na segunda vari´ avel. Escreva o conte´ udo das 2 vari´ aveis na tela.
*/

void swap(int *a, int *b)
{
    int aux;

    if(*b > *a)
    {
        aux = *a;
        *a = *b;
        *b = aux;

    } 
}

int main()
{
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Antes da alteracao:\na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("\nDepois da alteracao:\na = %d\nb = %d\n", a, b);
    

    return 0;
}