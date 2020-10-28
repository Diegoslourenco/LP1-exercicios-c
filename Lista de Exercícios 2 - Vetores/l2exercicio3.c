// 3. Receber 8 números e armazená-los em um vetor. Ao final, pedir para o usuário escolher 
// uma posição do vetor e exibir o número contido nela.

# include <stdio.h>
# define TAM 8

int main(void)
{
    int i, escolha;
    int vetor[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Digite um valor: ");
        scanf("%i", &vetor[i]);
    }

    printf("Escolha uma posicao do vetor de 1 a 8: ");
    scanf("%i", &escolha);

    if (escolha >= 0 && escolha <=8)
    {
        printf("O valor da posicao %i: %i", escolha, vetor[escolha - 1]);
    }
    else
    {
        printf("Digite uma posicao entre 1 e 8!");
    }    

    return 0;
}