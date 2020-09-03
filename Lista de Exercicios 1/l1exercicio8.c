// 8. Use a função da questão passado e lance o dado 1 milhão de vezes. Conte quantas vezes cada número saiu.
// A probabilidade deu certo? Ou seja, a porcentagem dos números foi parecida?

# include <stdio.h>

int joga_dado(void);

int main(void)
{
    int i, valor;
    int contagem_maxima = 1000000;

    for (i = 0; i < contagem_maxima; i++)
    {
        valor = joga_dado(void);
    }

    return;
}

int joga_dado(void)
{
    return rand() % 6;
}