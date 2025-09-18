#include <stdio.h>

/*
Crie uma func¸˜ ao que receba dois parˆ ametros: um array e um valor do mesmo tipo do array. 
A func¸˜ ao dever´ a preencher os elementos de array com esse valor. 
N˜ ao utilize ´ ındices para percorrer o array, apenas aritm´ etica de ponteiros.
*/

void preenche(char *str1, int tam, char letra)
{
    char *fim = str1 + tam;
    for(char *ptr = str1; ptr < fim; ptr++)
    {
        *ptr = letra;
    }
    *fim = '\0';
}

int main()
{
    char str[10];

    preenche(str, 10, 'a');

    printf("%s", str);

    return 0;
}