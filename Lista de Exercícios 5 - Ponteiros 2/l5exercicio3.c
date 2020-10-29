/*
3. Crie um programa que contenha um array contendo 5 elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo valores pares.
*/

# include <stdio.h>

# define TAMANHO 5

void recebeValor(int*);
void ordenaValores(int*);

int main(void)
{
    int array[TAMANHO];

    recebeValor(array);
    ordenaValores(array);

    return 0;
}

void recebeValor(int* array)
{
    for (int i = 0; i < TAMANHO; i++)
    {   
        printf("Digite o valor %i: ", i+1);
        scanf("%i", array);
        array++;
    }

}

void ordenaValores(int* array)
{
    for (int i = 0; i < TAMANHO; i++)
    {
        if (*array % 2 == 0)
        {
            printf("\nEndereco da posicao %i: %i", i+1, array);
        }

        array++;
    }

    return;
}