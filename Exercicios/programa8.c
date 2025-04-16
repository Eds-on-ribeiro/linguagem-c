#include <stdio.h>
#include <stdlib.h>

/* Uma pessoa tem as seguintes contas para pagar hoje: conta de luz, conta de
telefone e conta de internet. No entanto, essa pessoa nao terá condições fnanceiras
para realizar os pagamentos hoje, que é o dia do vencimento de todas as contas.
Deste modo, as contas em atraso sofrarão ação de juros quando forem pagas, esses
acréssimos sofrerão variações de acordo com a quantidade de dias em atraso.
Obserbe que as taxas de juros a serem aplicadas conforme o exposto na tabela a
seguir:
L       luz       5%        12%       20%
T       Telefone  6%        20%       30%
I       Internet  5%        14%       22%
O código deve permitir a entrada da legenda da conta em atraso, o valor da conta
e a quantidade de dias de atraso qie a conta foi paga. Ao final, calcule o valor
pago, considerando os aumentos percentuais de acordo com os dias atrasados.*/

int main()
{
  // Solicita a legenda da conta
  char legenda;
  printf("Entre com a legenda da conta (L, T, I): ");
  scanf("%c", &legenda);

  // Solicita o valor da conta
  float valorConta;
  printf("Entre com o valor da conta: ");
  scanf("%f", &valorConta);

  // Solicita dias de atraso no pagamento
  int diasAtraso;
  printf("Entre com a quantidade de dias de atraso no pagamento: ");
  scanf("%d", &diasAtraso);

  // Calcula os juros
  float juros = 0;
  switch (legenda)
  {
  case 'L':
    // Legenda conta até 15 dias, até 30 dias, acima de 30 dias.
    // L       luz       5%        12%       20%
    if (diasAtraso <= 15)
    {
      juros = 5;
    }
    else if (diasAtraso <= 30)
    {
      juros = 12;
    }
    else
    {
      juros = 20;
    }
    break;

  case 'T':
    // Legenda conta até 15 dias, até 30 dias, acima de 30 dias.
    // T       Telefone  6%        20%       30%
    if (diasAtraso <= 15)
    {
      juros = 6;
    }
    else if (diasAtraso <= 30)
    {
      juros = 20;
    }
    else
    {
      juros = 30;
    }
    break;

  case 'i':
    // Legenda conta até 15 dias, até 30 dias, acima de 30 dias.
    // I       Internet  5%        14%       22%
    if (diasAtraso <= 15)
    {
      juros = 5;
    }
    else if (diasAtraso <= 30)
    {
      juros = 14;
    }
    else
    {
      juros = 22;
    }
    break;
  }

  // Apresenta os resultados

  float valorComJuros = valorConta + (juros / 100) * valorConta;
  printf("foi pago %.2f considerando %.2f %% de juros", valorComJuros, juros);
}