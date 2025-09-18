#include <stdio.h>
#include <string.h>

/*
Elabore uma func¸˜ ao que receba duas strings como parˆ ametros e verifique se a segunda string ocorre dentro da primeira. 
Use aritm´ etica de ponteiros para acessar os caracteres das strings.
*/

void compara(char *str1, char *str2, int tam1, int tam2)
{
    char *fim1 = str1 + tam1;
    char *fim2 = str2 + tam2;
    int count = 0;
    for(char *ptr1 = str1; ptr1 < fim1; ptr1++)
    {
        for(char *ptr2 = str2; ptr2 < fim2; ptr2++)
        {
            //printf("[DEBUGGER] -> count = %d; *ptr1 = %c; *ptr2 = %c\n", count, *ptr1, *ptr2);
            if(*ptr1 == *ptr2){
                count++;
                ptr1++;
                if(count == tam2)
                {
                    printf("A string 2 esta contida na string 1.");
                    return;
                }
            } else{
                ptr1 -= count; 
                count = 0;
                break;
            }
        }
    }
    printf("A string 2 nao esta contida na string 1.");
}

int main()
{
    char string1[] = {"misisissipi"}, string2[] = {"sisi"};
    
    
    printf("string1 = %s, string2 = %s\n", string1, string2);
    
    compara(string1, string2, strlen(string1), strlen(string2));

    return 0;
}