# 🗂️ Exercios-em-C #1

1. Faça um programa em C que leia um número real e calcule o quadrado deste número. Ao final, o programa deve imprimir o resultado do cálculo.

2. Faça um programa em C que leia o saldo de uma conta poupança e imprima o novo saldo, considerando um reajuste de 2%.

3. Faça um programa em C que leia a base e altura de um retângulo e imprima o perímetro (2 * base + 2 * altura) e a área (base * altura).

4. Faça um programa em C que calcule o reajuste do salário de um funcionário. Para isso, o programa deverá ler o salário atual do funcionário e ler o percentual de reajuste. Ao final imprimir o valor do novo salário.

5. Faça um programa em C que faça a conversão de uma temperatura lida em Celcius para Fahrenheit. Fórmula F = (9 * C + 160) / 5

6. Crie, em C, uma pequena calculadora de IMC (Índice de Massa Corpórea)

7. O hospital local está fazendo uma campanha para receber doação de sangue.
    O doador deve inicialmente se cadastrar informando sua idade, seu peso, responder a um breve questionário e apresentar um documento oficial com foto.
    Faça um programa que permita ao hospital realizar o cadastro dos voluntários para avaliar a aptidão quanto à doação de sangue. 
    Para estar apto a doar, o voluntário deve ter idade entre 16 e 69, pesar pelo menos 50 kg, estar bem alimentado e não estar resfriado. 
    O programa deve ler os dados e imprimir no final se ele está apto ou não.
    
 8. Escreva um programa em linguagem C que leia um peso na Terra e o número de um planeta. O programa deve imprimir o valor correspondente do peso neste planeta.
   A relação de planetas é dada a seguir juntamente com o valor das gravidades relativas à Terra.
 
Cód     Gravidade Relativa      Planeta
------------------------------------------
1           0,37                Mercúrio
2           0,88                Vênus
3           0,38                Marte
4           2,64                Júpter
5           1,15                Saturno
6           1,17                Urano
 
Para calcular o peso no planeta em questão, use a seguinte 
fórmula:
 
    PP = (PT / 10) * G
 
Sendo:
 
    PP = Peso no planeta
    PT = Peso na Terra
    G = Gravidade relativa


# 🗂️ Exercios-em-C #2
1. Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição. Caso o resultado seja maior que 10, apresentá-lo.

2.  Faça um programa em C que leia um valor e verifique se é múltiplo de 3.

3. Faça um programa em C que leia um número e informe se ele é divisível por 3 E por 7.

4. Faça um programa em C que leia um número e imprima uma das mensagens: "Maior do que 20", "Igual a 20" ou "Menor do que 20".

5. Faça um programa em C que leia 3 notas de um aluno, calcule a média e diga se ele está aprovado ou não (média 6).

6. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite um número para um intervalo, aparecer uma mensagem informando que não existe mês com este número. Utilize o switch para este problema.

7. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, sabendo-se que um carro tipo A faz 12 km com um litro de gasolina, um tipo B faz 9km e o tipo C, 8km por litro.

# 🗂️ Exercios-em-C #3

1. Faça um programa em C que imprima todos os números de 1 até 100.

2. Faça um programa em C que imprima todos os números de 100 até 1.

3. Faça um programa em C que imprima todos multiplos de 5 de 1 até 500.

4. Crie um programa em C que seja capaz de entrar com três notas de 5 alunos. 
O programa deve mostrar a média de cada aluno e a média da turma.

 5. Construa um programa em C que leia vários números e informe quantos números entre 100 e 200 foram digitados.
 Quando o valor 0 (zero) for lido, o algoritmo deverá cessar sua execução.

# 🗂️ Exercios-em-C #4

1. Implemente um programa em C que leia o nome, a idade e o endereço de uma pessoa 
e armazene esses dados em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida.

2. Crie uma estrutura para representar as coordenadas de um ponto no plano
(posições X e Y). Em seguida, declare e leia do teclado um ponto, calcule exiba 
a distância dele até a origem das coordenadas, isto é, posição (0, 0).
Para realizar o cálculo, utilize a fórmula de distância euclidiana:

    d = RAIZ((QUADRADO(XB - XA) + QUADRADO(YB + YA)))
    (vide imagem na pasta)

    Onde:
        - d = Diatância entre os pontos A e B
        - X = coordenada X em um ponto
        - Y = coordenada Y em um ponto

3. Crie uma estrutura para representar as coordenadas de um ponto no plano
(posições X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a 
distância entre eles, considere a mesma fórmula do exercício anterior.

4. Crie uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto 
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que 
declare e leia uma estrutura retângulo e exiba a área, o comprimento da 
diagonal e o perímetro desse retângulo.


5. Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura 
deve conter o número de matrícula do aluno, seu nome e notas de três provas.
Defina também um tipo para esta estrutura. 
Agora, escreva um programa que leia os dados de cinco alunos e os armazena 
nessa estrutura. Em seguida, exiba o nome e as notas do aluno que possui a 
maior média geral dentre os cinco.

# 🗂️ Exercios-em-C #5

1. Faça um programa que leia os elementos inteiros de uma matriz com tamanho 3 X 3 e imprima os elementos multiplicando-os por 2.

2. Faça um programa que permita entrar com valores inteiros em uma matriz A de tamanho 3 X 4. Gerar e imprimir uma matriz B que é o triplo da matriz A.

3. Entrar com valores para uma matriz C (2x3). Gerar e imprimir a C tramsposta. A matriz transposta é gerada trocando linha por coluna. Veja o exemplo a seguir:

    C = (1 2 3)
        (4 5 6)

    Ct = (1 4)
         (2 5)
         (3 6)


4. Supondo que uma matriz apresente em cada linha o total de produtos vendidos ao mês por uma loja que trabalha com cinco tipos diferentes de produtos, construir um programa que leia esse total e, ao final, apresente o total de produtos vendidos em cada mês e o total de vendas por ano por produto.
