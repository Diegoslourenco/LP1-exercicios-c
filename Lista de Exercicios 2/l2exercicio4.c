// 4. Receber 15 números e armazená-los em um vetor. 
// Ao final, exibir o dobro de cada um dos números.

# include <stdio.h>
# define TAM 15

int main(void)
{
    int i;
    int vetor[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    for (i = 0; i < TAM; i++)
    {
        printf("\nDobro do valor %i: %i", i+1, 2 * vetor[i]);
    }

    return 0;
}