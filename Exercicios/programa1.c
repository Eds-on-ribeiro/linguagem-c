#include <stdio.h>
/* Escreva um programa, que receba os seguintes dados de um cliente de uma companhia aerea:
1. Nome
2. Sexo
3. CPF
4. Telefone
5. Qauntidade de malas a serem embarcadas
6. Peso total das malas
Ao final, os dados devem ser apresentados na tela, um em cada linha.*/
int main()
{

	// Declara as variaveis
	char nome[50];
	char sexo[15];
	char cpf[20];
	char telefone[20];
	int qtdMalas;
	float pesoMalas;

	// Solicita os valores para as variaveis
	printf("Entre com o nome: ");
	scanf("%s", nome);

	printf("Entre com o sexo (masculino ou feminino): ");
	fflush(stdin);
	scanf("%s", sexo);

	printf("Entre com cpf: ");
	scanf("%s", cpf);

	printf("Entre com o telefone: ");
	scanf("%s", telefone);

	printf("Entre com a quantidade de malas: ");
	scanf("%d", &qtdMalas);

	printf("Entre com o peso da mala: ");
	scanf("%f", &pesoMalas);

	// Mostrar valores informados
	printf("Dados lidos: \n");
	printf("Nome = %s \n", nome);
	printf("Sexo = %s \n", sexo);
	printf("CPF = %s \n", cpf);
	printf("Telefone de contato = %s \n", telefone);
	printf("Quantidade de malas = %d \n", qtdMalas);
	printf("Peso total das malas = %.2f", pesoMalas);
}