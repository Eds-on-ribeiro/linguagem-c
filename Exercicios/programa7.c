#include <stdio.h>
#include <stdlib.h>

/* Implemente um programa em C, que leia o codigo DDD. Após a leitura, [
classifique esse codigo de acordo com os dados da tabela abaixo. ao final,
apresente qual é a cidade correspondente ao DDD informado. Caso o usuario
digite um codigo não listado na tabela, enviar uma mensagem informando que o
codigo não está cadastrado.
Obs: usar o comando switch/case.
DDD: Cidade:
11 São Paulo
21 Rio de Janeiro
31 Belo Horizonte
41 Coritiba
51 Porto alegre
61 Brasilia
71 Salvador
81 Recife
91 Belem */

int main()
{
  // solicita o DDD
  int ddd;
  printf("entre com o ddd: ");
  scanf("%d", &ddd);

  // Classifica o ddd
  char cidade[50] = "";
  switch (ddd)
  {
  case 11:
    strcpy(cidade, "Sao Paulo");
    break;
  case 21:
    strcpy(cidade, "Rio de Janeiro");
    break;
  case 31:
    strcpy(cidade, "Belo Horizonte");
    break;
  case 41:
    strcpy(cidade, "Curitiba");
    break;
  case 51:
    strcpy(cidade, "Porto Alegre");
    break;
  case 61:
    strcpy(cidade, "Distrito Federal");
    break;
  case 71:
    strcpy(cidade, "Salvador");
    break;
  case 81:
    strcpy(cidade, "Recife");
    break;
  case 91:
    strcpy(cidade, "Belem");
    break;
  }

  // Apresenta os resultados

  if (strlen(cidade) > 0)
  {
    printf("A cidade corresponde ao ddd = %s", cidade);
  }
  else
  {
    printf("O codigo nao esta cadastrado");
  }
}