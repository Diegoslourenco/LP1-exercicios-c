/*
3) Crie uma função que receba como parâmetros dois vetores de inteiros (já ordenados): x1 e x2 e as suas
respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um terceiro vetor,
x3, alocado dinamicamente, contendo a união de x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3.

Sendo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8},  x3 irá conter {1, 3, 4, 5, 6, 7, 8}.

Assinatura da função:

int* uniao(int *x1, int *x2, int n1, int n2, int* qtd);
*/

# include <stdio.h>
# include <stdlib.h>
# define TAMANHO1 5
# define TAMANHO2 5

int* uneVetores(int*, int*, int, int, int*);

int main(void)
{
    int vetor1[TAMANHO1] = { 1, 3, 5, 6, 7 };
    int vetor2[TAMANHO2] = { 1, 3, 4, 6, 8 };
    int* vetor3 = 0;
    int quantidade;

    vetor3 = uneVetores(vetor1, vetor2, TAMANHO1, TAMANHO2, &quantidade);

    for (int i = 0; i < quantidade; i++)
    {
        printf("\n%i", vetor3[i]);
    }

    free(vetor3);

    return 0;
}

int* uneVetores(int* vetor1, int* vetor2, int tamanhoVetor1, int tamanhoVetor2, int* quantidade)
{  
    int i = 0;
    int j = 0;
    int z = 0;
    int ultimoValor = 0;
    int* vetorRetorno;
    *quantidade = 0;

    while ((i < tamanhoVetor1) && (j < tamanhoVetor2))
    {
        if ((i == tamanhoVetor1 - 1) && (j == tamanhoVetor2 - 1))
        {
            if (vetor1[i] == vetor2[j] && vetor1[i] != ultimoValor)
            {
                *quantidade += 1;
                i += 1;
                j += 1;
            }
            else if (vetor1[i] != ultimoValor && vetor2[j] != ultimoValor)
            {
                *quantidade += 2;
                i += 1;
                j += 1;
            }
            else if (vetor1[i] != ultimoValor || vetor2[j] != ultimoValor)
            {
                *quantidade += 1;
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
            if (vetor1[i] != ultimoValor)
            {
                ultimoValor = vetor1[i];
                *quantidade += 1;
                i += 1;
                j += 1;
            }
            else
            {
                i += 1;
                j += 1;    
            }        
        }
        else if (vetor1[i] < vetor2[j])
        {
            if (vetor1[i] != ultimoValor)
            { 
                ultimoValor = vetor1[i];
                *quantidade += 1;
                i += 1;
            }
            else
            {
                i += 1;
            }   
        }
        else if (vetor1[i] > vetor2[j] && vetor2[j])
        {
            if (vetor2[j] != ultimoValor)
            {
                ultimoValor = vetor2[j];
                *quantidade += 1;
                j += 1;
            }
            else
            {
                j += 1;
            } 
        }
    }

    vetorRetorno = (int*)malloc(*quantidade * sizeof(int));

    i = 0;
    j = 0;
    ultimoValor = 0;

    while ((i < tamanhoVetor1) && (j < tamanhoVetor2))
    {
        if ((i == tamanhoVetor1 - 1) && (j == tamanhoVetor2 - 1))
        {
            if (vetor1[i] == vetor2[j] && vetor1[i] != ultimoValor)
            {
                vetorRetorno[z] = vetor1[i];
                i += 1;
                j += 1;
            }
            else if (vetor1[i] != ultimoValor && vetor2[j] != ultimoValor)
            {
                vetorRetorno[z] = vetor1[i];
                z += 1;
                vetorRetorno[z] = vetor2[j];
                i += 1;
                j += 1;
            }
            else if (vetor1[i] != ultimoValor)
            {
                vetorRetorno[z] = vetor1[i];
                i += 1;
                j += 1;
            }
            else
            {
                vetorRetorno[z] = vetor2[j];
                i += 1;
                j += 1;
            }             
        }
        else if (vetor1[i] == vetor2[j])
        {
            if (vetor1[i] != ultimoValor)
            {
                vetorRetorno[z] = vetor1[i];
                ultimoValor = vetorRetorno[z];
                i += 1;
                j += 1;
                z += 1;
            }
            else
            {
                i += 1;
                j += 1;
            }           
        }
        else if (vetor1[i] < vetor2[j])
        {
            if (vetor1[i] != ultimoValor)
            {
                vetorRetorno[z] = vetor1[i];
                ultimoValor = vetorRetorno[z];
                i += 1;
                z += 1;
            }
            else
            {
                i += 1;
            }             
        }
        else if (vetor1[i] > vetor2[j])
        {
            if (vetor2[j] != ultimoValor)
            {
                vetorRetorno[z] = vetor2[j];
                ultimoValor = vetorRetorno[z];
                j += 1;
                z += 1;
            }
            else
            {
                j += 1;
            }        
        }  
    }

    return vetorRetorno;
}