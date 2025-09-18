#include <stdio.h>

/*
Elaborar um programa que leia dois valores inteiros (A e B). 
Em seguida fac¸a uma func¸˜ ao que retorne a soma do dobro dos dois n´umeros lidos. 
Afunc¸˜ ao dever´ a armazenar o dobro de A na pr´ opria vari´ avel A e o dobro de B na pr´ opria vari´ avel B
*/

int dobra(int *a, int *b)
{
    int aux = (*a + *b) * 2;
    *a *= 2;
    *b *= 2;

    return aux;
}

int main()
{
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Antes da alteracao:\na = %d\nb = %d\n", a, b);
    printf("A soma do dobro das duas eh: %d", dobra(&a, &b));
    printf("\nDepois da alteracao:\na = %d\nb = %d\n", a, b);

    return 0;
}