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
void trocaPosicao(int*, int*);

int main(void)
{
    int numero1;
    int numero2;
    int numero3;
    int ordenaRetorno;

    printf("Digite o valor 1: ");
    scanf("%i", &numero1);
    printf("Digite o valor 2: ");
    scanf("%i", &numero2);
    printf("Digite o valor 3: ");
    scanf("%i", &numero3);

    ordenaRetorno = ordenaValores(&numero1, &numero2, &numero3);

    if (ordenaRetorno == 0)
    {
        printf("A lista foi ordenada!");
        printf("\nValor 1: %i\nValor 2: %i\nValor 3: %i", numero1, numero2, numero3);
    }
    else
    {
        printf("A lista contem valores iguais");
        printf("\nValor 1: %i\nValor 2: %i\nValor 3: %i", numero1, numero2, numero3);
    }
    
    return 0;
}

int ordenaValores(int* endereco1, int* endereco2, int* endereco3)
{
    int aux;

    if (*endereco1 > *endereco2 && *endereco1 > *endereco3)
    {
        if (*endereco3 > *endereco2)
        {
            trocaPosicao(endereco2, endereco3);
        }    
    }
    else if (*endereco2 > *endereco1 && *endereco2 > *endereco3)
    {
        if (*endereco1 > *endereco3)
        {
            trocaPosicao(endereco1, endereco2);
        }
        else
        {
            trocaPosicao(endereco1, endereco2);
            trocaPosicao(endereco2, endereco3);
        }
    }
    else
    {
        if (*endereco1 > *endereco2)
        {
            trocaPosicao(endereco2, endereco3);
            trocaPosicao(endereco1, endereco2);
        }
        else
        {
            trocaPosicao(endereco1, endereco3);
        }       
    }

    if (*endereco1 == *endereco2 && *endereco1 == *endereco3)
    {
        return 1;
    }
    else
    {
        return 0;
    }  
}

void trocaPosicao(int *numero1, int *numero2)
{
    int aux;
    aux = *numero1;
    *numero1 = *numero2;
    *numero2 = aux;

    return;
}