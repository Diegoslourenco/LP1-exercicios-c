/*
1)Faça um programa que leia um valor n e crie dinamicamente um vetor de n elementos
e passe esse vetor para uma função que vai ler os elementos desse vetor. Depois, no
programa principal, o vetor preenchido deve ser impresso. Além disso, antes de
finalizar o programa, deve-se liberar a área de memória alocada.
*/

# include <stdio.h>
# include <stdlib.h>

void lerElementosVetor(int*, int);

int main (void)
{
    int tamanho;
    int* vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tamanho);

    vetor = (int*)malloc(tamanho * sizeof(int));

    lerElementosVetor(vetor, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("\nValor %i do vetor: %i", i+1, vetor[i]);
    }

    free(vetor);

    return 0;
}

void lerElementosVetor(int* vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor %i do vetor: ", i+1);
        scanf("%i", &vetor[i]);
    }

    return;
}