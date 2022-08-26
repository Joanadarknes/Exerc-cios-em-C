
// 1. Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição. Caso o resultado seja maior que 10, apresentá-lo.

#include <stdio.h>

void l2e1(){
	int a, b;
	printf("Digite o primeiro valor inteiro: ");
	scanf("%d",&a);
	printf("Digite o segundo valor inteiro: ");
	scanf("%d",&b);
	if(a+b>10){
		printf("O resultado de A + B é maior que 10, e é igual a %.1f",a+b);
	}else{
		printf("O resultado não é maior que 10, então não quero mostrar, não.\n\n");
	}
}