#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct registro
{
    int dia;
    int mes;
    int ano;
}   registro;

registro *completaRegistro(int qnt){
    srand(time(NULL));
    registro *reg = (registro *) malloc (qnt * sizeof(registro));
    if(reg == NULL){
        printf("Falha ao alocar memoria para registro!");
        exit(1);
    }
    for (int i = 0; i < qnt; i++)
    {
        reg[i].dia = rand() % 32;
        reg[i].mes = rand() % 13;
        reg[i].ano = 1950 + rand() %  76;
    }
    return reg;
}

int comparaReg(registro a, registro b){
    if(a.ano != b.ano)
        return a.ano - b.ano;
    if(a.mes != b.mes) 
        return a.mes - b.mes;
    return a.dia - b.dia;
}

int particiona(registro *v, int inicio, int fim){
    registro pivo = v[(inicio + fim)/2];
    while(inicio <= fim){
        while(comparaReg(v[inicio], pivo) < 0){
            inicio++;
        }
        while(comparaReg(v[fim], pivo) > 0){
            fim--;
        }
        if(inicio <= fim){
            registro aux = v[inicio];
            v[inicio] = v[fim];
            v[fim] = aux;
            inicio++;
            fim--;
        }
    }
    return inicio; 
}

void quickSort(registro *v, int inicio, int fim){
    if(inicio < fim){
        int pos = particiona(v, inicio, fim);
        quickSort(v, inicio, pos - 1);
        quickSort(v, pos, fim);
    }
}

int main()
{
    registro *reg = completaRegistro(40);

    printf("----- COMO OS DADOS VIERAM -----\n");
    for(int i = 0; i < 40; i++){
        printf("\nRegistro(%i): %i/%i/%i", i+1, reg[i].dia, reg[i].mes, reg[i].ano);
    }
    printf("\n---------------------------------------------\n");

    quickSort(reg, 0, 39);
    
    printf("----- COMO OS DADOS FICARAM -----\n");
    for(int i = 0; i < 40; i++){
        printf("\nRegistro(%i): %i/%i/%i", i+1, reg[i].dia, reg[i].mes, reg[i].ano);
    }
    printf("\n---------------------------------------------");

    free(reg);
    return 0;
}
