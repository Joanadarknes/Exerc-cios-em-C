// 7. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, sabendo-se que um carro tipo A faz 12 km com um litro de gasolina, um tipo B faz 9km e o tipo C, 8km por litro.


l2e7(){
	char carro;
	float percurso;
	printf("Quantos KM tem o percurso?\n");
	scanf("%f",&percurso);
	printf("Qual o tipo do carro? A, B ou C?");
	scanf("%c", &carro);
	if(carro=='A'){
	printf("O carro A consome 1L de gasolina por 12km. Ele consumiria %.2f litros nesse percurso.",percurso/12);
		}else if(carro=='B'){
	printf("O carro B consome 1L de gasolina por 9km. Ele consumiria %.2f litros nesse percurso.",percurso/9);
		}else if(carro=='C'){
	printf("O carro C consome 1L de gasolina por 8km. Ele consumiria %.2f litros nesse percurso.",percurso/8);
}
	}