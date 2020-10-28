// 5. Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório
// dos números de 1 a N.

# include <stdio.h>

int somaInteiros(int);

int main(void)
{
    int numero = 5;
    printf("%i", somaInteiros(numero));

    return 0;
}

int somaInteiros(int numero)
{
    if (numero == 1)
    {
        return numero;
    }
    else
    {
        return numero + somaInteiros(numero - 1);
    }
}