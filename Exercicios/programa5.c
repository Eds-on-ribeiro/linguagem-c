#include <stdio.h>
#include <stdlib.h>

/* A prefeitura de um determinado estado abriu uma linha de crédito para os
seus servidores municipais. O valor máximo do empréstimo não poderá ultrapassar
30% do salário bruto. Implemente um programa em C que pwemita entrar com o
salário bruto e o valor do empréstimo. Ao final, informe se o impréstimo pode
ou não ser concedido.
Obs: usar o comando if. */

int main()
{
    // Solicita o salário bruto
    float salarioBruto;
    printf("Entre com o salario bruto: ");
    scanf("%f", &salarioBruto);

    // Solicita o valor do empréstimo
    float valorEmprestimo;
    printf("Entre com o valor do emprestimo: ");
    scanf("%f", &valorEmprestimo);

    // Verifica se o empréstimo pode ser concedito
    float valorMaximoEmprestimo = (30.0 / 100.0) * salarioBruto;
    if (valorEmprestimo > valorMaximoEmprestimo)
    {
        printf("O emprestimo nao pode ser concedido, por que ultrapassa o valor maximo de %.2f", valorMaximoEmprestimo);
    }
    else
    {
        printf("O emprestimo pode ser concedido, porque nao ultrapassa o valor maximo de %.2f", valorMaximoEmprestimo);
    }
}