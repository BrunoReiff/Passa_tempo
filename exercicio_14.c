#include <stdio.h>
#include <math.h>

#define p 3.14159265359

/*
Implemente uma func¸˜ ao que calcule a ´ area da superf´ ıcie e o volume de uma esfera de raio R. 
Essa func¸˜ ao deve obedecer ao prot´ otipo: void calc_esfera(float R, float *area, float *volume) 
A ´ area da superf´ ıcie e o volume s˜ ao dados, respectivamente, por: A=4 p R2 V =4 3 p R3
*/

void calc_esfera(float R, float *area, float *volume)
{
    *area = 4 * p * pow(R, 2);
    *volume = (4 * p * pow(R, 3))/3;
}

int main()
{
    float area, volume, raio = 1;

    calc_esfera(raio, &area, &volume);
    printf("Area: %f cm2; Volume: %f cm3", area, volume);

    return 0;
}