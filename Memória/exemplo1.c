# include <stdio.h>
# include <stdlib.h>

void recebe(int*, int);

int main(void)
{
    int* ponteiro;
    int tamanho;

    printf("Digite o tamanho de inteiros a serem alocados dinamicamente: ");
    scanf("%i", &tamanho);

    ponteiro = (int *)malloc(tamanho * sizeof(int)); //memoria alocada para guardar ponteiro de inteiros

    if (!ponteiro)
    {
        printf("Erro na alocacao!");
        return -1;
    }
    else
    {
        printf("Sucesso!\n");
    }

    recebe(ponteiro, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("\nVoce digitou = %i", ponteiro[i]);
    }

    printf("\nLibera memoria!");
    free(ponteiro);

    return 0;
}

void recebe(int* ponteiro, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um valor: ");
        scanf("%i", &ponteiro[i]);
    }
}