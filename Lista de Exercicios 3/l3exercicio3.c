// 3. Faça uma função recursiva que permita somar os elementos de um vetor de inteiros de 10 posições.

# include <stdio.h>
# define TAMANHO 10

int somaVetor(int*, int);

int main(void)
{
    int vetor[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int indexLastElement = TAMANHO - 1;
    int soma = 0;

    soma = somaVetor(vetor, indexLastElement);

    printf("%i", soma);

    return 0;
}

int somaVetor(int vetor[], int index)
{
    int soma = 0;

    if (index == 0) // base da resursao
    {
        soma = vetor[index];
        return soma;
    }
    else
    {
        soma += vetor[index];
        soma += somaVetor(vetor, index - 1);
    }

    return soma; 
}