/*
9. Escreva um programa que declare um array de inteiros e um ponteiro para inteiros.
Associe o ponteiro ao array.  Agora, some mais um (+1) a cada posição do array usando
o ponteiro (use *).
*/

# include <stdio.h>

# define TAMANHO 3

int main(void)
{
    int vetor[TAMANHO] = { 1, 2, 3 };
    int* ponteiroInteiro = vetor;

    for (int i = 0; i < TAMANHO; i++)
    {
        *ponteiroInteiro += 1;
        ponteiroInteiro += 1;
        printf("\n%i", vetor[i]);
    }

    return 0;
}