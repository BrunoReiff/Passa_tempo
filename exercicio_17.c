#include <stdio.h>

/*
Crie uma func¸˜ ao para somar dois arrays. Esta func¸˜ ao deve receber dois arrays e retornar a somaemumterceiro array. 
Caso o tamanho do primeiro e segundo array seja diferente ent˜ ao a func¸˜ ao retornar´ a ZERO (0). 
Caso a func¸˜ ao seja conclu´ ıda com sucesso a mesma deve retornar o valor UM (1). 
Utilize aritm´ etica de ponteiros para manipulac¸˜ ao do array.
*/

int soma_array(int *vet1, int *vet2, int *vet_result, int tam1, int tam2)
{
    if(tam1 != tam2)
        return 0;
    
    int *fim = vet1 + tam1;

    for(int *ptr = vet1; ptr < fim; ptr++)
    {
        *vet_result = *ptr + *vet2;
        vet_result++;
        vet2++; 
    }


    return 1;
}

int main()
{
    int vet1[] = {1,2,3,4,5}, vet2[] = {5,4,3,2,1};
    int tam1 = sizeof(vet1)/sizeof(vet1[0]), tam2 = sizeof(vet2)/sizeof(vet2[0]);
    int vet_result[tam1];

    soma_array(vet1, vet2, vet_result, tam1, tam2);

    for(int i = 0; i < tam1; i++)
    {
        printf("%d ", vet_result[i]);
    }

    return 0;
}