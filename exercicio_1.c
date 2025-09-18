#include <stdio.h>
/*
Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
Associe as vari´ aveis aos ponteiros (use &). Modifique os valores de cada vari´ avel usando os ponteiros. 
Imprima os valores das vari´ aveis antes e ap´ os a modificac ¸˜ ao.
*/

int main()
{
    int x = 1, *p_x = &x;
    float y = 2.0, *p_y = &y;
    char z = 'a', *p_z = &z;

    printf("Antes da modificacao:\n");
    printf("x = %d\n*p_x = %d\n", x, *p_x);
    printf("y = %.2f\n*p_y = %.2f\n", y, *p_y);
    printf("z = %c\n*p_z = %c\n", z, *p_z);
    
    *p_x = 10;
    *p_y = 20.0;
    *p_z = 'b';

    printf("\nDepois da modificacao:\n");
    printf("x = %d\n*p_x = %d\n", x, *p_x);
    printf("y = %.2f\n*p_y = %.2f\n", y, *p_y);
    printf("z = %c\n*p_z = %c\n", z, *p_z);

    return 0;
}