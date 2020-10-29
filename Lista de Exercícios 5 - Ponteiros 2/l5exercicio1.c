/*1. Crie um programa que contenha um array de float contendo 10 elementos.
Imprima o endereço de cada posição desse array.*/

# include <stdio.h>

# define TAMANHO 10

int main(void)
{
    int array[TAMANHO] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = 0; i < TAMANHO; i++)
    {
        printf("\nEndereco do valor %i: %i", i + 1, &array[i]);
    }

    return 0;
}