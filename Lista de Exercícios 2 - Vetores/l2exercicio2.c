// 2. Receber 10 números e armazená-los em um vetor. Ao final, exibir os números na ordem inversa
// da que foram recebidos

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

    for (i = TAM - 1; i >= 0; i--)
    {
        printf("%i", vetor[i]);
    }

    return 0;
}