#include <stdio.h>

/*
Fac¸a um programa que leia trˆ es valores inteiros e chame uma func¸˜ ao que receba estes 3 valores de entrada e retorne eles ordenados, 
ou seja, o menor valor na primeira vari´ avel, o segundo menor valor na vari´ avel do meio, e o maior valor na ´ultima vari´ avel. 
A func¸˜ ao deve retornar o valor 1 se os trˆ es valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.
*/

void swap(int *x, int *y)
{
    int aux;
    aux = *x;
    *x = *y; 
    *y = aux;
}

int ordena(int *a, int *b, int *c)
{
    if(*a > *b)
    {
        swap(a, b);
    }

    if(*a > *c)
    {
        swap(a, c);
    }

    if(*b > *c)
    {
        swap(b, c);
    }

    int flag = 0;
    if(*a == *b && *a == *c){flag = 1;}
    return flag;
}

int main()
{
    int a, b ,c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);

    printf("Antes da alteracao:\na = %d\nb = %d\nc = %d\n\n", a, b, c);
    if(ordena(&a, &b, &c) == 1)
    {
        printf("Valores sao iguais.\n");
    } else{
        printf("Valores sao diferentes.\n");
    }
    printf("\nDepois da alteracao:\na = %d\nb = %d\nc = %d\n", a, b, c);

    return 0;
}