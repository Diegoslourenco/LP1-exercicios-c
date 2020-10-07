// 6. Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório
// dos números de 1 a N.

# include <stdio.h>

int somaInteiros(int);

int main(void)
{
    int numero = 4;
    printf("%i", somaInteiros(numero));

    return 0;
}

int somaInteiros(int numero)
{
    int soma = 0;

    if (numero == 1)
    {
        soma = numero;
        return soma;
    }
    else
    {
        soma += numero;
        soma += somaInteiros(numero - 1);
    }

    return soma;
}