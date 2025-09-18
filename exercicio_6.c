#include <stdio.h>

/*
Crie um programa que contenha um array de float contendo 10 elementos. Imprima o enderec¸o de cada posic¸˜ ao desse array.
*/


int main()
{
    float array[] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
    float *p_array = array;

    for(int i = 0; i < 10; i++)
    {
        printf("Valor %d: %.2f\n", i, p_array[i]);
    }

    return 0;
}