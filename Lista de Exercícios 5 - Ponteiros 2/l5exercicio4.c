/*
4. Faça um programa que leia tres valores inteiros e chame uma função que receba estes 3
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável,
o segundo menor valor na variável do meio, e o maior valor na  ́última variável.
A função deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes.
Exibir os valores ordenados na tela.
*/

# include <stdio.h>

# define TAMANHO 3

int ordenaValores(int*, int*, int*);

int main(void)
{
    int numero1;
    int numero2;
    int numero3;

    printf("Digite o valor 1: ");
    scanf("%i", &numero1);
    printf("Digite o valor 2: ");
    scanf("%i", &numero2);
    printf("Digite o valor 3: ");
    scanf("%i", &numero3);

    ordenaValores(&numero1, &numero2, &numero3);
    printf("\nValor 1: %i\nValor 2: %i\nValor 3: %i", numero1, numero2, numero3);

    return 0;
}

int ordenaValores(int* endereco1, int* endereco2, int* endereco3)
{
    int aux;

    if (*endereco1 > *endereco2 && *endereco1 > *endereco3)
    {
        if (*endereco3 > *endereco2)
        {
            aux = *endereco2;
            *endereco2 = *endereco3;
            *endereco3 = aux;
        }    
    }
    else if (*endereco2 > *endereco1 && *endereco2 > *endereco3)
    {
        if (*endereco1 > *endereco3)
        {
            aux = *endereco1;
            *endereco1 = *endereco2;
            *endereco2 = aux;
        }
        else
        {
            //troca 1 com 2
            aux = *endereco1;
            *endereco1 = *endereco2;
            *endereco2 = aux;

            //troca 2 com 3
            aux = *endereco2;
            *endereco2 = *endereco3;
            *endereco3 = aux;
        }
    }
    else
    {
        if (*endereco1 > *endereco2)
        {
            //troca 1 e 3
            aux = *endereco1;
            *endereco1 = *endereco3;
            *endereco3 = aux;

            //troca 2 e 3
            aux = *endereco2;
            *endereco2 = *endereco3;
            *endereco3 = aux;
        }
        else
        {
            //troca 1 e 3
            aux = *endereco1;
            *endereco1 = *endereco3;
            *endereco3 = aux;
        }       
    }

    if (*endereco1 == *endereco2 && *endereco1 == *endereco3)
    {
        return 0;
    }
    else
    {
        return 1;
    }  
}