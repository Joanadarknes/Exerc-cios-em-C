// Faça um programa em C que leia um número e imprima uma das mensagens: "Maior do que 20", "Igual a 20" ou "Menor do que 20".


#include <stdio.h>

int main()
{
    int valor;

    printf("informe um valor: ");
    scanf("%d", &valor);

    if (valor > 20)  //módulo
        printf("É maior que vinte!");
    else if (valor == 20)
      printf("\nÉ maior que vinte!");
    else
        printf("\né menor que vinte");

    return 0;
}
