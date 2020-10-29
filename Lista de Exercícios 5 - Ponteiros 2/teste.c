# include <stdio.h>

void teste(int*);

int main(void)
{
    int vetor[3] = { 1, 2, 3 };

    teste(vetor);
    
    return 0;
}

void teste(int* vetor)
{
    for (int i = 0; i < 3; i++)
    {
        printf("\nPosicao %i: %i", i+1, vetor);
        printf("\nValor %i: %i", i+1, *vetor);

        if (*vetor % 2 == 0)
        {
            printf("\nPosicao %i: %i", i+1, vetor);
            printf("\nValor %i: %i", i+1, *vetor);
        }

        vetor++;
    }
}