#include <stdio.h>
#include <string.h>

/*
Crie uma func¸˜ ao que receba como parˆ ametro um array e o imprima. 
N˜ ao utilize ´ ındices para percorrer o array, apenas aritm´ etica de ponteiros.
*/
void imprime(char *str)
{
    while (*str != '\0')
    {
        printf("%c", *str);
        str++;
    }
    
}

int main()
{
    char string[] = "macaco";
    imprime(string);

    return 0;
}