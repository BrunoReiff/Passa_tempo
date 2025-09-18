#include <stdio.h>

/*
Fac¸a um programa que leia 2 valores inteiros e chame uma func¸˜ ao 
que receba estas 2 vari´ aveis e troque o seu conte´udo, ou seja, esta func ¸˜ ao ´ e chamada passando duas vari´ aveis A e B por exemplo 
e, ap´ os a execuc ¸˜ ao da func ¸˜ ao, A conter´ a o valor de B e B ter´ a o valor de A.
*/

void troca_val(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b; 
    *b = aux;
}


int main()
{
    int a, b, *p_a, *p_b; 

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    p_a = &a;
    p_b = &b;

    printf("Antes da alteracao:\na = %d\nb = %d\n", a, b);
    troca_val(p_a, p_b); // troca_val(&a, &b);
    printf("\nDepois da alteracao:\na = %d\nb = %d\n", a, b);


    return 0;
}