// 8. Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números
// naturais de 0 até N em ordem crescente.

# include <stdio.h>

void imprimeNumerosOrdem(int, int);

int main(void)
{
    int numero = 4;
    int numeroAtual = 0;

    imprimeNumerosOrdem(numero, numeroAtual);

    return 0;
}

void imprimeNumerosOrdem(int numero, int numeroAtual)
{
    if (numeroAtual == numero) // base da recursao
    {
        printf("%i", numeroAtual);
        return;
    }
    else
    {
        printf("%i", numeroAtual);
        return imprimeNumerosOrdem(numero, numeroAtual + 1);
    }
}

