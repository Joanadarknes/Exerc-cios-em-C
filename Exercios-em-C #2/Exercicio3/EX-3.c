// 3. Faça um programa em C que leia um número e informe se ele é divisível por 3 E por 7

#include <stdio.h>

void l2e3(){
int val;
	printf("Digite um valor inteiro: ");
	scanf("%d",&val);
	if(val%3==0 && val%7==0){
		printf("O número é divisível por 3 e por 7!\n\n");
	}else if(val%3!=0 && val%7==0){
		printf("Não é divisível por 3, mas é por 7.\n\n");
	}else if(val%3==0 && val%7!=0){
		printf("É divisível por 3, mas não é por 7.\n\n");
	}
	else{
		printf("Não é divisível nem por 3 nem por 7.\n\n");
	}
}