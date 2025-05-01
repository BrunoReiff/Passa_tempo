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

int particiona(registro *v, int inicio, int fim){
    int pivo_ano = (v[inicio].ano + v[fim].ano + v[(inicio + fim)/2].ano)/3;
    int pivo_mes = (v[inicio].mes + v[fim].mes + v[(inicio + fim)/2].mes)/3;
    int pivo_dia = (v[inicio].dia + v[fim].dia + v[(inicio + fim)/2].dia)/3;
    while(inicio < fim){
        while   (inicio < fim && 
                (v[inicio].ano <= pivo_ano || 
                (v[inicio].ano == pivo_ano && v[inicio].mes <= pivo_mes) || 
                (v[inicio].ano == pivo_ano && v[inicio].mes == pivo_mes && v[inicio].dia <= pivo_dia))){
            inicio++;
        }
        while   (inicio < fim && 
                (v[fim].ano > pivo_ano || 
                (v[fim].ano == pivo_ano && v[fim].mes > pivo_mes) || 
                (v[fim].ano == pivo_ano && v[fim].mes == pivo_mes && v[fim].dia > pivo_dia))){
            fim--;
        }
        if(inicio < fim){
            registro aux = v[inicio];
            v[inicio] = v[fim];
            v[fim] = aux;
        }
    }
    return inicio; 
}

void quickSort(registro *v, int inicio, int fim){
    if(inicio < fim){
        int pos = particiona(v, inicio, fim);
        quickSort(v, inicio, pos - 1);
        quickSort(v, pos + 1, fim);
    }
}

int main()
{
    registro *reg = completaRegistro(40);

    printf("----- COMO OS DADOS VIERAM -----\n");
    for(int i = 0; i < 40; i++){
        printf("\ndia: %i - mes: %i - ano: %i", reg[i].dia, reg[i].mes, reg[i].ano);
    }
    printf("\n---------------------------------------------\n");

    quickSort(reg, 0, 39);
    
    printf("----- COMO OS DADOS FICARAM -----\n");
    for(int i = 0; i < 40; i++){
        printf("\ndia: %i - mes: %i - ano: %i", reg[i].dia, reg[i].mes, reg[i].ano);
    }
    printf("\n---------------------------------------------");

    free(reg);
    return 0;
}
