/*
9. Leia 10 números inteiros e armazene em um vetor A. Crie dois novos vetores A1 e A2.
Copie os valores ímpares de A para A1, e os valores pares de A para A2.
Note que cada um dos vetores A1 e A2 tem no máximo 10 elementos,
mas nem todos os elementos são utilizados. No final escreva os elementos utilizados de A1 e A2.
*/

# include <stdio.h>
# define TAM 10

int main(void)
{
    int i;
    int j = 0, k = 0;
    int vetorA[TAM], vetorA1[TAM], vetorA2[TAM];

    // Recebendo 10 valores
    for (i = 0; i < TAM; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &vetorA[i]);
    }

    // Copiando valores impares para A1 e pares para A2
    // Contando impares em j e pares em k
    for (i = 0; i < TAM; i++)
    {
        if (vetorA[i] % 2 == 0)
        {
            vetorA2[j] = vetorA[i];
            k++;
        }
        else
        {
            vetorA1[k] = vetorA[i];
            j++;
        }  
    }

    printf("Elementos utilizado em A1: %i\nElementos utilizados em A2: %i", j, k);

    return 0;
}
