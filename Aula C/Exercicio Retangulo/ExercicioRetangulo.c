//Faça um programa em C que leia a base e altura de um retângulo e imprima o perímetro (2 * base + 2 * altura) e a área (base * altura).



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * * argv) {
	int b, h, area;

	printf("Informe o valor da base: ");
	scanf("%d", & b);
	printf("Informe o valor da altura: ");
	scanf("%d", & h);
	
	area = (b * h) / 2;

	printf("Valor da base: [%d]\n\n", area);
	system("pause");
	return 0;
}