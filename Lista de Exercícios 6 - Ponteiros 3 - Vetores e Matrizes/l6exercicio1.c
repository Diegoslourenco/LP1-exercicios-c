/*
1) Escreva um algoritmo que declare uma matriz de inteiros 3x3e imprima os elementos conforme exibido
abaixo utilizando aritmética de ponteiros
*/

# include <stdio.h>
#define TAMANHO 3

void imprimeMatriz(int*);

int main(void)
{
    int matriz[TAMANHO][TAMANHO] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    imprimeMatriz(matriz);

    return 0;
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