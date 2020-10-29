/*
7. Crie uma função que receba como parâmetro um array e o imprima. Não utilize  índices para percorrer
o array, apenas aritmetica de ponteiros.
*/

# include <stdio.h>

# define TAMANHO 3 

void imprimeVetor(int*);

int main(void)
{
    int vetor[TAMANHO] = { 1, 2, 3 };

    imprimeVetor(vetor);

    return 0;
}

void imprimeVetor(int* vetor)
{
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("\n%i", *vetor);
        vetor += 1;
    }

    return;
}