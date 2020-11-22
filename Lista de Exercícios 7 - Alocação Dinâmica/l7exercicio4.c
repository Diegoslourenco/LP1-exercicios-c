/*
4)  Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas respectivas
quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor, x3,
alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.

Sendo:
x1 = {1, 3, 5, 6, 7}
x2 = {1, 3, 4, 6, 8}
x3 irá conter {1, 3, 6}

Assinatura da função:
int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd);
*/

# include <stdio.h>
# include <stdlib.h>
# define TAMANHO1 5
# define TAMANHO2 5

int* mostraInterseccaoVetores(int*, int*, int, int, int*);

int main(void)
{
    int vetor1[TAMANHO1] = { 1, 3, 5, 6, 7 };
    int vetor2[TAMANHO2] = { 1, 3, 4, 6, 8 };
    int* vetor3 = 0;

    vetor3 = mostraInterseccaoVetores(vetor1, vetor2, TAMANHO1, TAMANHO2, vetor3);

    free(vetor3);

    return 0;
}

int* mostraInterseccaoVetores(int* vetor1, int* vetor2, int tamanhoVetor1, int tamanhoVetor2, int* vetorQuantidade)
{  
    int i = 0;
    int j = 0;
    int z = 0;
    int contador = 0;

    while ((i < tamanhoVetor1) && (j < tamanhoVetor2))
    {
        if ((i == tamanhoVetor1 - 1) && (j == tamanhoVetor2 - 1))
        {
            if (vetor1[i] == vetor2[j])
            {
                contador += 1;
                i += 1;
                j += 1;
            }
            else
            {
                i += 1;
                j += 1;
            }          
        }
        else if (vetor1[i] == vetor2[j])
        {
            contador += 1;
            i += 1;
            j += 1;
        }
        else if (vetor1[i] < vetor2[j])
        {
            i += 1;
        }
        else if (vetor1[i] > vetor2[j])
        {
            j += 1;
        }
    }

    vetorQuantidade = (int*)malloc(contador * sizeof(int));

    i = 0, j = 0;

    while ((i < tamanhoVetor1) && (j < tamanhoVetor2))
    {
        if ((i == tamanhoVetor1 - 1) && (j == tamanhoVetor2 - 1))
        {
            if (vetor1[i] == vetor2[j])
            {
                vetorQuantidade[z] = vetor1[i];
                i += 1;
                j += 1;
            }
            else
            {
                i += 1;
                j += 1;               
            }              
        }
        else if (vetor1[i] == vetor2[j])
        {
            vetorQuantidade[z] = vetor1[i];
            i += 1;
            j += 1;
            z += 1;
        }
        else if (vetor1[i] < vetor2[j])
        {
            i += 1;
        }
        else if (vetor1[i] > vetor2[j])
        {
            j += 1;
        }  
    }

    for (i = 0; i < contador; i++)
    {
        printf("\n%i", vetorQuantidade[i]);
    }

    return vetorQuantidade;
}