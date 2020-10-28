/*1. Construa uma função recursiva que receba um vetor e o seu tamanho e retorne a média aritmética
dos elementos do vetor. */

# include <stdio.h>
# define TAMANHO 5

float calculaMedia(float*, int, int);

int main(void)
{
    float vetor[TAMANHO] = { 1, 2, 3, 4, 5};

    int indexLastElement = 4;
    float media;

    media = calculaMedia(vetor, TAMANHO, indexLastElement);

    printf("Media dos valores do vetor: %.2f", media);

    return 0;
}

float calculaMedia(float vetor[], int tamanho, int index)
{
    float media;

    if(index == 0)
    {
        media = vetor[0]/ tamanho;
        return media;
    }
    else
    {
        media = vetor[index] / tamanho;
        media += calculaMedia(vetor, tamanho, index - 1);
    }
    
    return media;
 }