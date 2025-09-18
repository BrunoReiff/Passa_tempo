#include <stdio.h>
/*
Considere a seguinte declarac¸˜ ao: int A, *B, **C, ***D; 
Escreva um programa que leia a vari´ avel a e calcule e exiba o dobro, o triplo e o qu´ adruplo desse valor utilizando apenas os ponteiros B, C e D. 
O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o qu´ adruplo.
*/

int main()
{
    int a, *b = &a, **c = &b, ***d = &c;

    printf("a: ");
    scanf("%d", &a);

    printf("a = %d\n", a);

    printf("*b = %d\n", *b * 2);

    printf("**c = %d\n", **c * 3);

    printf("***d = %d\n", ***d * 4);

    return 0;
}