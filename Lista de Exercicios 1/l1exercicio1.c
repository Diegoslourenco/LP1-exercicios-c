// 1. Crie uma função que receba um valor e informe se ele é positivo ou não.

# include <stdio.h>

int verifica_positivo(int);

int main(void)
{
    int valor;

    // Recebendo valor do usuário
    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (verifica_positivo(valor) == 1)
    {
        printf("Positivo");
    }
    else
    {
        printf("Nao positivo");
    }
    return;
}

int verifica_positivo(int valor)
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