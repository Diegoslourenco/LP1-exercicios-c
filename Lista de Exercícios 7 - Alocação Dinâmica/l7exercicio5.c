/*
5)  Crie um programa para manipular vetores.
Implemente uma função que receba um vetor de inteiros V e retorne um outro vetor de inteiros
alocado dinamicamente com todos os valores de V que estejam entre o valor mínimo e máximo
(que também são passados como parâmetro para a função).

A função deve obedecer ao seguinte protótipo:

int* valores_entre(int *v, int n, int min, int max, int *qtd);

A função recebe:
- v: vetor de números inteiros;
- n: a quantidade de elementos do vetor v;
- min: valor mínimo a ser buscado;
- max: valor máximo a ser buscado;

A função deve:
- Verificar a quantidade de elementos do vetor que sejam maiores do que min e menores que max;
- Caso a quantidade seja maior do que 0 (zero), alocar dinamicamente uma área do exato tamanho
necessário para armazenar os valores;
- Copia os elementos do vetor que sejam maiores do que min e menores que max para a área alocada
dinamicamente.

A função retorna:
- O endereço da área alocada dinamicamente, preenchida com os números maiores do que min e menores que max,
ou NULL, caso essa relação de números não tenha sido criada;
- A quantidade de números carregados na área alocada dinamicamente, através do parâmetro qtd.

Em seguida, crie a função principal do programa para inicializar um vetor de inteiros, exibir
esses valores na tela e pedir para o usuário digitar o valor mínimo e máximo a ser buscado.
Em seguida o programa deverá chamar a função valores_entre e exibir na tela os valores resultantes.
Lembre-se de exibir uma mensagem de erro caso nenhum valor seja  encontrado. Não se esqueça de liberar
a memória alocada dinamicamente.
*/

# include <stdio.h>
# include <stdlib.h>
# define TAMANHO 5

int* selecionaIntermediarios(int*, int, int, int, int*);

int main(void)
{
    int i = 0;
    int vetorEntrada[TAMANHO] = { 1, 2, 3, 4, 5 };
    int minimo = 0;
    int maximo = 0;
    int* vetorSaida = 0;
    int tamanho = TAMANHO;
    int* quantidade = &tamanho;

    printf("Os valores dentro do vetor sao: ");
    
    for (i = 0; i < TAMANHO; i++)
    {
        printf("\n%i", vetorEntrada[i]);
    }

    printf("\nDigite o valor minimo a ser buscado: ");
    scanf("%i", &minimo);
    printf("Digite o valor maximo a ser buscado: ");
    scanf("%i", &maximo);

    vetorSaida = selecionaIntermediarios(vetorEntrada, TAMANHO, minimo, maximo, quantidade);

    if (vetorSaida == NULL)
    {
        printf("Erro!\nNao foi encontrado nenhum valor com os criterio passados.");
    }
    else
    {      
        printf("Os valores encontrados sao:\n");
        
        for (i = 0; i < *quantidade; i++)
        {
            printf("%i", vetorSaida[i]);
        }

        free(vetorSaida);
    }

    return 0;
}

int* selecionaIntermediarios(int* vetor, int tamanho, int minimo, int maximo, int* quantidade)
{
    int i = 0;
    int j = 0;
    int contador = 0;
    int* vetorSaida;

    // Verificando quantidade de elementos
    while (i < tamanho)
    {
        if ((vetor[i] >= minimo) && (vetor[i] <= maximo))
        {
            contador += 1;
            i += 1;
        }
        else
        {
            i += 1;
        }
    }

    if (contador > 0)
    {
        *quantidade = contador;
        vetorSaida = (int*)malloc(contador * sizeof(int));

        for (i = 0; i < tamanho; i++)
        {
            if ((vetor[i] >= minimo) && (vetor[i] <= maximo))
            {
                vetorSaida[j] = vetor[i];
                j += 1;
            }
        }

        return vetorSaida;
    }
    else
    {
        return NULL;
    }
}