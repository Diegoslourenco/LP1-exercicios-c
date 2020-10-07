// 11. Escreva uma função recursiva que gere todas as possíveis combinações para um jogo da MegaSena
// com 6 dezenas

# include <stdio.h>
# define SENA 6
# define DEZENAS 60

int geraCombinacoes(int*, int, int, int, int);

int main(void)
{
    int vetor[SENA];
    int totalNumeros = DEZENAS;
    int numerosUmJogo = SENA;
    int inicio = 1;
    int posicao = 1;
    int possibilidades = 0;

    possibilidades = geraCombinacoes(vetor, inicio, totalNumeros, posicao, numerosUmJogo);

    printf("%i", possibilidades);

    return 0;
}

// gera todas as combinacoes de DEZENAS(60) elementos, SENA(6) numeros por vez
int geraCombinacoes(int* vetor, int inicio, int totalNumeros, int posicao, int numerosUmJogo)
{
    int possibilidades = 0;

    // se a posicao atual for maior que o numeros de um jogo, imprima o vetor
    // o vetor contem uma possibilidade
    // Somei possibilidade, imprime muitos valores
    if (posicao > numerosUmJogo) // base da recursao
    {
        /*for (int i = 0; i <= numerosUmJogo; i++)
        {   
            printf("i", vetor[i]);
        }*/
        possibilidades++;

        return possibilidades;
    }
    else
    {
        // Para cada posicao, testar todas as possibilidades restantes, inicio atual ao totalNumeros
        for (int i = inicio; i <= totalNumeros; i++)
        {
            vetor[posicao] = i;
            possibilidades += geraCombinacoes(vetor, i + 1, totalNumeros, posicao + 1, numerosUmJogo);
        }
    }

    return possibilidades;
}