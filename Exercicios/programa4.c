#include <stdio.h>
/* O programa le o nome do vendedor, o salario fixo e o total de vendas.
A comissao é de 15% sobre as vendas, o programa mostra como resultado o
seu nome e salario ao fim do mes. */

int main()
{
	// Solicita o nome do vendedor
	char nomeVendedor[50];
	printf("Entre com o nome do vendedor: ");
	gets(nomeVendedor);

	// Solicita o salario fixo
	float salarioFixo;
	printf("Entre com o valor do salario fixo: ");
	scanf("%f", &salarioFixo);

	// Solicita o total de vendas
	float totalVendas;
	printf("Entre com o total de vendas efetuadas no mes: ");
	scanf("%f", &totalVendas);

	// Calcula o salario
	float salarioFinal = salarioFixo + (15.0 / 100.0) * totalVendas;
	printf("O vendedor %s recebeu %.2f no final do mes", nomeVendedor, salarioFinal);
}