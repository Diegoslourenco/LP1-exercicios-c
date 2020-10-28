// 5. Receber 12 números e armazená-los em um vetor. Ao final, exibir quais foram os números
// positivos informados.

# include <stdio.h>
# define TAM 12

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
        if (vetor[i] > 0)
        {
            printf("\n%i", vetor[i]);
        } 
    }

    return 0;
}