// Faça um programa em C que faça a conversão de uma temperatura lida em Celcius para Fahrenheit. Fórmula F = (9 * C + 160) / 5

#include <stdio.h>
 
int main(void)
{
    float c, f;
 
    printf("Temperatura em Celsius = "); scanf("%f", &c);
 
     f = (9 * c + 160) / 5;
 
    printf("A temperatura em Fahrenheit = %.2f", f);

    return(0);
}