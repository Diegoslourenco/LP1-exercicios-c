# include <stdio.h>
# include <stdlib.h>
# define TAMANHO 10

typedef struct 
{
    int dia;
    int mes;
    int ano;
} Data;

void imprimeData(Data*, int);

int main(void)
{
    int i;
    Data* ponteiro;
    ponteiro = (Data *)malloc(sizeof(Data) * TAMANHO);

    for (i = 0; i < TAMANHO; i++)
    {
        scanf("%i", &ponteiro[i].dia);
        scanf("%i", &ponteiro[i].mes);
        scanf("%i", &ponteiro[i].ano);
    }

    for (i = 0; i < TAMANHO; i++)
    {
        printf("\n%i/%i/%i", ponteiro[i].dia, ponteiro[i].mes, ponteiro[i].ano);
    }
    
    free(ponteiro);

    return 0;
}