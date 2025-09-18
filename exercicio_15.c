#include <stdio.h>

/*
Escreva uma func¸˜ ao que aceita como parˆ ametro um array de inteiros com N valores, 
e determina o maior elemento do array e o n´umero de vezes que este elemento ocorreu no array. 
Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, 
a func¸˜ ao deve retorna para o programa que a chamou o valor 15 e o n´umero 3 (indicando que o n´umero 15 ocorreu 3 vezes). 
A func¸˜ ao deve ser do tipo void.
*/

void conta(int *vet, int tam, int *ocorrencia, int *maior)
{
    int *fim = vet + tam;

    for(int *ptr = vet; ptr < fim; ptr++)
    {
        if(ptr == vet)
        {
            *maior = *ptr;
        }
        else if(*ptr > *maior)
        {
            *maior = *ptr;
            *ocorrencia = 1;
        } else if(*ptr == *maior) 
        {
            *ocorrencia += 1;
        } 

    }
}

int main()
{
    int vet[] = {5,2,15,3,7,15,8,6,15};
    int ocorrencia, maior;
    int tam = sizeof(vet)/sizeof(vet[0]);

    conta(vet, tam, &ocorrencia, &maior);

    printf("O maior numero eh: %d\nEle ocorreu %d vezes.", maior, ocorrencia);

    return 0;
}