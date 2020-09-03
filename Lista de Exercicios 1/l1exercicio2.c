// 2. Crie uma função que receba um valor e diga se é nulo ou não.

# include <stdio.h>

int verifica_nulo(int);

int main(void)
{
    int valor;

    // Recebendo valor do usuario
    printf("Digite um valor: ");
    scanf("%i", &valor);

    if (verifica_nulo(valor) == 1)
    {
        printf("Nulo");
    }
    else
    {
        printf("Nao nulo");
    }

    return;
}

int verifica_nulo(int valor)
{
    if (valor == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}