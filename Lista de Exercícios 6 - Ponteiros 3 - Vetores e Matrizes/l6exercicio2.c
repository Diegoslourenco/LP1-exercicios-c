/*
Modifique o exercício anterior para que imprima a matriz invertida, onde era linha, agora será coluna.
*/

# include <stdio.h>
# define TAMANHO 3

void imprimeMatrizInvertida(int*);

int main(void)
{
    int matriz[TAMANHO][TAMANHO] = {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 }
    };

    imprimeMatrizInvertida(matriz);

    return 0;
}

void imprimeMatrizInvertida(int* matriz)
{
    printf("Matriz Invertida\n\n");

    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            printf("%i ", *(matriz + i + TAMANHO * j));

            if (j == TAMANHO - 1)
            {
                printf("\n");
            }  
        }
    }

    return;
}