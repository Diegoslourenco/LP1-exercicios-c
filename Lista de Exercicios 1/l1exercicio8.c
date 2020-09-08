// 8. Use a função da questão passado e lance o dado 1 milhão de vezes. Conte quantas vezes cada número saiu.
// A probabilidade deu certo? Ou seja, a porcentagem dos números foi parecida?

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int joga_dado(void);
float calculaPorcentagem(int, int);

int main(void)
{
    int i, valor;
    int lado1 = 0, lado2 = 0, lado3 = 0, lado4 = 0, lado5 = 0, lado6 = 0;
    int jogadas = 1000000;

    srand(time(NULL));

    for (i = 0; i < jogadas; i++)
    {
        valor = joga_dado();

        if (valor == 1)
        {
            lado1++;
        }
        else if (valor == 2)
        {
            lado2++;
        }
        else if (valor == 3)
        {
            lado3++;
        }
        else if (valor == 4)
        {
            lado4++;
        }
        else if (valor == 5)
        {
            lado5++;
        }
        else
        {
            lado6++;
        }
    }

    printf("1: %.2f%\n2: %.2f%\n3: %.2f%\n4: %.2f%\n5: %.2f%\n6: %.2f%\n",
            calculaPorcentagem(lado1, jogadas), calculaPorcentagem(lado2, jogadas),
            calculaPorcentagem(lado3,jogadas), calculaPorcentagem(lado4, jogadas),
            calculaPorcentagem(lado5, jogadas), calculaPorcentagem(lado6, jogadas));

    return 0;
}

int joga_dado(void)
{
    return 1 + (rand() % 6);
}

float calculaPorcentagem(int numero, int total)
{
    return ((float) numero / total) * 100;
}