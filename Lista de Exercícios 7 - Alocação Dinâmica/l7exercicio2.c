/*
2) Faça uma função que receba um valor n e crie dinamicamente um vetor de n
elementos e retorne um ponteiro. Crie uma função que receba um ponteiro para um
vetor e um valor n e imprima os n elementos desse vetor. Construa também uma
função que receba um ponteiro para um vetor e libere esta área de memória. Ao final,
crie uma função principal que leia um valor n e chame a função criada acima. Depois,
a função principal deve ler os n elementos desse vetor. Então, a função principal deve
chamar a função de impressão dos n elementos do vetor criado e, finalmente, liberar a
memória alocada através da função criada para liberação.
*/


# include <stdio.h>
# include <stdlib.h>

int* alocaMemoria(int);
void imprimeVetor(int*, int);
void liberaMemoria(int*);

int main(void)
{
    int tamanho;
    int* ponteiro;

    printf("Digite o tamanho do vetor: ");
    scanf("%i", &tamanho);
    printf("\n");

    ponteiro = alocaMemoria(tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor %i: ", i+1);
        scanf("%i", &ponteiro[i]);
    }

    imprimeVetor(ponteiro, tamanho);
    liberaMemoria(ponteiro);

    return 0;
}

int* alocaMemoria(int tamanho)
{   
    int* ponteiro;

    ponteiro = (int *)malloc(tamanho * sizeof(int));

    return ponteiro;
}

void imprimeVetor(int* ponteiro, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nValor indice %i: %i", i+1, ponteiro[i]);
    }

    return;
}

void liberaMemoria(int* ponteiro)
{
    free(ponteiro);

    return;
}