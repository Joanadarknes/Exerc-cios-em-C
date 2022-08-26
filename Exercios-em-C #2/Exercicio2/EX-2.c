// 2.  Faça um programa em C que leia um valor e verifique se é múltiplo de 3.

#include <stdio.h>

void l2e2(){
int val;
	printf("Digite um valor inteiro: ");
	scanf("%d",&val);
	if(val%3==0){
		printf("O número é múltiplo de 3!\n\n");
	}else{
		printf("Não é múltiplo de 3!\n\n");
	}
}