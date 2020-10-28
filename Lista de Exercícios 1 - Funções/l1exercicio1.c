// 1. Crie uma função que receba um valor e informe se ele é positivo ou não.

# include <stdio.h>

int verificaPositivo(float);

int main(void)
{
    int valor;

    // Recebendo valor do usuário
    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (verificaPositivo(valor) == 1)
    {
        printf("Positivo");
    }
    else
    {
        printf("Nao positivo");
    }
    return 0;
}

int verificaPositivo(float valor)
{
    if (valor > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}