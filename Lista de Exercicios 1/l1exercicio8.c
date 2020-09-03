// 8. Use a função da questão passado e lance o dado 1 milhão de vezes. Conte quantas vezes cada número saiu.
// A probabilidade deu certo? Ou seja, a porcentagem dos números foi parecida?

# include <stdio.h>

int joga_dado(void);
int calcula_porcentagem(int, int);

int main(void)
{
    int i, valor;
    int lado1 = 0, lado2 = 0, lado3 = 0, lado4 = 0, lado5 = 0, lado6 = 0;
    int jogadas = 1000000;

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



    printf("1: %i%\n2: %i%\n3: %i%\n4: %i%\n5: %i%\n6: %i%\n",
            calcula_porcentagem(lado1, jogadas), calcula_porcentagem(lado2, jogadas),
            calcula_porcentagem(lado3,jogadas), calcula_porcentagem(lado4, jogadas),
            calcula_porcentagem(lado5, jogadas), calcula_porcentagem(lado6, jogadas));

    return;
}

int joga_dado(void)
{
    srand(time(NULL));

    return 1 + rand() % 6;
}

int calcula_porcentagem(int numero, int total)
{
    return ((numero / total) * 100);
}