#include <stdio.h>
#include <stdlib.h>

/* Em uma fábrica de veículas, o salário base de um montador da Linha de
fabricação é R$ 800,00. Além do salário um adicional de produtividade, com
base na quantidade de veículos que ele ajudou a base, a montador recebe 7
montar no més. O salário final pago a esse montador segue as seguintes regras
descritas a seguir:

- Se o número de veículos mantades for inferior a 20, o montador não receberd
adicional.
- Se o número de veículos montados for superior a 20 e inferior a 50, a montador
receberá um adicional de R$ 150,00 por veículo montado.
- Se o número de veículos nontodos for superior a 50, a montudor receberá un
adicional de R$ 250,00 por veículo montado.

Implemente un programa en C, que permita a entrada de valor do solário base, bem
como, a quantidade de veiculos montados no mês. Ao final, teprima a saldrío do
mes desse mantador.

Obs: usar o comando if. */

int main()
{
	// Solicita salario base.
	float salarioBase;
	printf("Entre com o salario base: ");
	scanf("%d", &salarioBase);

	// Solicita a quantidade de veiculos montados no mes.
	int numVeiculosMontados;
	printf("Entre com o numero de veiculos montados no mes: ");
	scanf("%d", &numVeiculosMontados);

	// Calulo do salario, com base nas regras.
	float salarioMes = 0;

	// Se o numero de veiculos montados for superior a 20, o montador nao recebera adicional.
	if (numVeiculosMontados < 20)
	{
		salarioMes = salarioBase;

		// Se o numero de veiculos montados for superio a 20 e inferior a 50, o montador recebera um adicional de R$ 150,00 por veiculo montado.
	}
	else if (numVeiculosMontados > 20 && numVeiculosMontados < 50)
	{
		salarioMes = salarioBase + 150 * numVeiculosMontados;

		// Se o numero de veiculos montados for superior a 50, o montador recebera um adicional de R$ 250,00 por veicilo montado.
	}
	else if (numVeiculosMontados > 50)
	{
		salarioMes = salarioBase + 250 * numVeiculosMontados;
	}
	printf("O salario do mes = %.2f", salarioMes);
}