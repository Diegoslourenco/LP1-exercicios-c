/*
6. Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do array.
A função deverá preencher os elementos de array com esse valor. Não utilize  índices para
percorrer o array, apenas aritmetica de ponteiros.
*/

# include <stdio.h>

# define TAMANHO 3

void preencheVetor(int*, int);

int main(void)
{
    int numero = 10;
    int vetor[TAMANHO];

    preencheVetor(vetor, numero);

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("\n%i", vetor[i]);
    }

    return 0;
}

void preencheVetor(int * vetor, int numero)
{
    for (int i = 0; i < TAMANHO; i++)
    {
        *vetor = numero;
        vetor += 1;
    }

    return;
}