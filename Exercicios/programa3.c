#include <stdio.h>
/* Calcula a taxa de juros de uma dívida. A taxa de juros mensal e o valor
fornecido pelo usuário. */

int main()
{
	// Solicita a taxa de juros mensal
	float taxaJurosMensal;
	printf("entre com a texa de juros mensal (em porcentagem): ");
	scanf("%f", &taxaJurosMensal);
	// Solicita o valor da divida
	float valorDivida;
	printf("Entre com o valor da divida: ");
	scanf("%f", &valorDivida);
	// Calcula o juros da divida
	float valorAjustado = valorDivida + valorDivida * (taxaJurosMensal / 100);
	float valorJuros = valorAjustado - valorDivida;
	printf("O valor da divida com juros = %.2f \n", valorAjustado);
	printf("O valor dos juros = %.2d", valorJuros);
}