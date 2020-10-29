/*
5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes  2 valores
de entrada e retorne o maior valor na primeira variável e o menor valor na  segunda variável.
Escreva os conteúdos das 2 variáveis na tela.
*/

# include <stdio.h>

void selecionaMaior(int*, int*);

int main(void)
{
    int numero1;
    int numero2;

    printf("Digite o valor 1: ");
    scanf("%i", &numero1);
    printf("Digite o valor 2: ");
    scanf("%i", &numero2);

    selecionaMaior(&numero1, &numero2);
    printf("\nValor 1: %i\nValor 2: %i", numero1, numero2);

    return 0;
}

void selecionaMaior(int* endereco1, int* endereco2)
{
    int aux = 0;

    if (*endereco1 > *endereco2)
    {
        return;
    }
    else
    {
        aux = *endereco1;
        *endereco1 = *endereco2;
        *endereco2 = aux;
        return;
    }
}