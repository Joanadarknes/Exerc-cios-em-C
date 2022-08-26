// 5. Faça um programa em C que leia 3 notas de um aluno, calcule a média e diga se ele está aprovado ou não (média 6).


void l2e5(){
int n1, n2, n3, media;
	printf("Digite a primeira nota: ");
	scanf("%d",&n1);
	printf("Digite a segunda nota: ");
	scanf("%d",&n2);
	printf("Digite a terceira nota: ");
	scanf("%d",&n3);
	media = (n1+n2+n3)/3;
	if(media>=6){
		printf("Aprovadx, isso aí garotx!\n\n");
	}
	else{
		printf("Reprovou, se fudeu.\n\n");
	}
}