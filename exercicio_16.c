#include <stdio.h>

/*
Implemente uma func¸˜ ao que receba como parˆ ametro um array de n´umeros reais de tamanho N e retorne quantos n´umeros negativos h´ a nesse array. 
Essa func¸˜ ao deve obedecer ao prot´ otipo: int negativos(float *vet, int N);
*/

int negativos(float *vet, int N)
{
    int count = 0;
    float *fim = vet + N;

    for(float *ptr = vet; ptr < fim; ptr++)
    {
        if(*ptr < 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    float vet[] = {1.0,-2.0,3.0,-4.0,5.0,-6.0,-7.0,-8.0,9.0,10.0};
    int tam = sizeof(vet)/sizeof(vet[0]);

    printf("A quantida de numeros negativos eh %d ", negativos(vet, tam));


    return 0;
}