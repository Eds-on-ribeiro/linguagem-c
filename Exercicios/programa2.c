#include <stdio.h>
/*Implemente um programa em C, que deve ler o ano de nascimento de uma pessoa
e o ano atual. Calcule e imprima na tela o número de dias aproximados ja vivido
por essa pessoa, desconsiderando os anos bissextos. */

int main()
{
	// Solicita o ano de nascimento
	int anoNascimento;
	printf("Entre com o ano de nacimento da pessoa: ");
	scanf("%d", &anoNascimento);
	// Solicita o ano atual
	int anoAtual;
	printf("Entre com o ano atual: ");
	scanf("%d", &anoAtual);

	// Calcula o numero de dias vividos
	int numDeDiasVividos = 365 * (anoAtual - anoNascimento);
	printf("Numero de dias vividos = %d", numDeDiasVividos);
}