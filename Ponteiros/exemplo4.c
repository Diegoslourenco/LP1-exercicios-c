# include <stdio.h>

int somaVetor1(int *vetor, int tamanho);
int somaVetor2(int *vetor, int tamanho);

int main(void)
{
    int vetor[] = { 1, 2, 3, 4 };
    int tamanho = sizeof(vetor) / sizeof(int);

    printf("\nSomatorio de v1 = %i", somaVetor1(vetor, tamanho));

    printf("\nSomatorio de v1 = %i", somaVetor2(vetor, tamanho));

    return 0;
}

int somaVetor1(int *vetor, int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }

    return soma;
}

int somaVetor2(int *vetor, int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += *vetor;
        vetor++; //adição de um ponteiro
    }

    return soma;
}