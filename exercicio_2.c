#include <stdio.h>

// Escreva um programa que contenha duas vari´ aveis inteiras. Compare seus enderec¸os e exiba o maior enderec ¸o.

int main()
{
    int x, y;
    int *p_x = &x, *p_y = &y;

    if (&x > &y)
    {
        printf("O maior endereco eh do x.\n%p", &x);
    } else{
        printf("O maior endereco eh do y.\n%p", &y);
    }
    printf("\n");
    if (p_x > p_y)
    {
        printf("O maior endereco eh do x.\n%p", &x);
    } else{
        printf("O maior endereco eh do y.\n%p", &y);
    }

    return 0;
}