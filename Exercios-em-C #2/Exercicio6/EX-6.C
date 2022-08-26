// 6. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite um número para um intervalo, aparecer uma mensagem informando que não existe mês com este número. Utilize o switch para este problema.

void l2e6(){
	int n;
	printf("Digite um número de 1 a 12!\n");
	scanf("%d", &n);
	switch(n){
		case 1:
				printf("O mês 1 é Janeiro, feliz ano novo!\n\n");
		break;
		case 2:
				printf("O mês 2 é Fevereiro, o mês diferentão que quis ser mais curto.\n\n");
		break;
		case 3:
				printf("O mês 3 é Março. Ninguém liga.\n\n");
		break;
		case 4:
				printf("O mês 4 é Abril, tem chocolate!\n\n");
		break;
		case 5:
				printf("O mês 5 é Maio, mês das mães!\n\n");
		break;
		case 6:
				printf("O mês 6 é Junho, já foi metade do ano!\n\n");
		break;
		case 7:
				printf("O mês 7 é Julho, férias pra quem pode!\n\n");
		break;
		case 8:
				printf("O mês 8 é Agosto, mês dos pais!\n\n");
		break;
		case 9:
				printf("O mês 9 é Setembro, 7 de Setembro foi bem importante!\n\n");
		break;
		case 10:
				printf("O mês 10 é Outubro, tem dia das crianças!\n\n");
		break;
		case 11:
				printf("O mês 11 é Novembro, tá acabando o ano!\n\n");
		break;
		case 12:
		printf("O mês 12 é Dezembro, mês do Natal!\n\n");
		break;
		default:
		printf("Não tem mais que 12 meses, pelo menos não no meu planeta. Não sei no seu...\n\n");
		break;
	}
}