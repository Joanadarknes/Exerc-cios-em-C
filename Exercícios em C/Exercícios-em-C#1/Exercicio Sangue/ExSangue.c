/* (do material utilizado pelo professor)
    O hospital local está fazendo uma campanha para receber 
    doação de sangue.
    O doador deve inicialmente se cadastrar informando sua idade, seu peso, responder a um breve questionário 
    e apresentar um documento oficial com foto.
    Faça um programa que permita ao hospital realizar o cadastro 
    dos voluntários para avaliar a aptidão quanto à doação de sangue. 
    Para estar apto a doar, o voluntário deve ter idade
    entre 16 e 69, pesar pelo menos 50 kg, estar bem alimentado e 
    não estar resfriado. 
    O programa deve ler os dados e imprimir no final se ele está apto ou não.
*/

#include <stdio.h>

int main(void)
{

    int idade, bemAlimentado, resfriado;
    float peso;

    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    printf("\nInforme seu peso: ");
    scanf("%f", &peso);

    printf("\nVocê está bem alimentado(a) <1 - Sim | 0 - não>: ");
    scanf("%d", &bemAlimentado);

    printf("\nVocê está resfriado(a) <1 - Sim | 0 - não>: ");
    scanf("%d", &resfriado);

    if ((idade >= 16 && idade <= 69) && peso >= 50 && bemAlimentado && !resfriado)
    {
        printf("\nApto para doação!");
    }
    else
    {
        printf("\nInapto para doação!");
    }

    return 0;
}