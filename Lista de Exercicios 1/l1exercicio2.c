// 2. Crie uma função que receba um valor e diga se é nulo ou não.

# include <stdio.h>

int verificaNulo(float);

int main(void)
{
    float valor;

    // Recebendo valor do usuario
    printf("Digite um valor: ");
    scanf("%f", &valor);

    if (verificaNulo(valor) == 1)
    {
        printf("Nulo");
    }
    else
    {
        printf("Nao nulo");
    }

    return 0;
}

int verificaNulo(float valor)
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