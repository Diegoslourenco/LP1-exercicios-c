// 1. Receber 10 números e armazená-los em um vetor. Ao final, exibir os números na ordem que
// foram recebidos.

# include <stdio.h>
# define TAM 10

int main(void)
{
    int i;
    int vetor[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite um valor: ");
        scanf("%i", &vetor[i]);
    }

    for (i = 0; i < TAM; i++)
    {
        printf("%i", vetor[i]);
    }

    return 0;
}