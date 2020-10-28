//3. Crie um programa em C que receba um vetor de números reais com 100 elementos.
//Escreva uma função recursiva que inverta ordem dos elementos presentes no vetor.

# include <stdio.h>
# define TAMANHO 100

void inverteVetor(float*, int, int);

int main(void)
{
    float vetor[TAMANHO];
    int indexLastElement = TAMANHO - 1;
    int indexFirstElement = 0;
    int i;

    for (i = 0; i < TAMANHO; i++)
    {
        vetor[i] = i + 1;
    }

    inverteVetor(vetor, indexLastElement, indexFirstElement);

    for (i = 0; i < TAMANHO; i++)
    {
        printf("Item %i do vetor: %.2f\n", i+1, vetor[i]);
    }

    return 0;
}

void inverteVetor(float* vetor, int indexLast, int indexFirst)
{
    int temp = 0;

    if (indexLast <= indexFirst) // base da recursao
    {
        return;
    }
    else
    {
        temp = vetor[indexFirst];
        vetor[indexFirst] = vetor[indexLast];
        vetor[indexLast] = temp;
        inverteVetor(vetor, indexLast-1, indexFirst+1);
    }

    return;
}