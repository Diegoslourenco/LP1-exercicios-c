/*
Faça um algoritmo para somar duas matrizes 4x4.
*/

# include <stdio.h>
# define TAMANHO 4

void somaMatrizes(int*, int*, int*);
void imprimeMatrz(int*);

int main(void)
{
    int matriz1[TAMANHO][TAMANHO] = {
        {  1,  2,  3,  4 },
        {  5,  6,  7,  8 },
        {  9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };

    int matriz2[TAMANHO][TAMANHO] = {
        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };

    int matrizResultado[TAMANHO][TAMANHO];

    somaMatrizes(matriz1, matriz2, matrizResultado);
    
    imprimeMatriz(matrizResultado);

    return 0;
}

void somaMatrizes(int* matriz1, int* matriz2, int* matrizResultado)
{
    for (int i = 0; i < TAMANHO * TAMANHO; i++)
    {
        *(matrizResultado + i) = *(matriz1 + i) + *(matriz2 + i);
    }

    return;
}

void imprimeMatriz(int* matriz)
{
    printf("Matriz\n\n");
    
    for (int i = 0; i < (TAMANHO * TAMANHO); i++)
    {
        printf("%i ", *(matriz + i));

        if ((i + 1) % TAMANHO == 0)
        {
            printf("\n");
        }    
    }

    return;
}