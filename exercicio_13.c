#include <stdio.h>

/*
Escreva uma func¸˜ ao que dado um n´umero real passado como parˆ ametro, retorne a parte inteira e a parte fracion´ aria deste n´umero. 
Escreva um programa que chama esta func¸˜ ao. Prot´ otipo: void frac(float num, int* inteiro, float* frac);
*/
void frac(float num, int* inteiro, float* frac)
{
    if (num > 0)
    {
        *frac = num - (int)num;
        *inteiro = (int)num;
    } else{
        printf("Insira um valor valido!");
    }
    
    

}

int main()
{
    float num = 10.25, fracs;
    int inteiro;

    frac(num, &inteiro, &fracs);
    printf("inteiro = %d; fracs = %f", inteiro, fracs);

    return 0;
}