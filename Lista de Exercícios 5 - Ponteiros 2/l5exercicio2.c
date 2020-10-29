/*
2. Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada
valor lido.
*/

# include <stdio.h>

# define TAMANHO 5

void recebeVetor(int*);
void imprimePares(int*);

int main(void)
{
    int array[TAMANHO];

    recebeVetor(array);
    imprimePares(array);

    return 0;
}

void recebeVetor(int* array)
{
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Digite o valor %i: ", i+1);
        scanf("%i", array);
        array++;
    }

}

void imprimePares(int* array)
{
    for (int i = 0; i < TAMANHO; i++)
    {   
        printf("\nDobro do valor na posicao %i: %i", i+1, *array * 2);
        array++;
    }

    return;
}