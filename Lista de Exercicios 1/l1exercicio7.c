//7. Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, um número de 1 até 6.

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int joga_dado(void);

int main(void)
{
    srand(time(NULL));
    printf("%i", joga_dado());

    return 0;
}

int joga_dado(void)
{
    return 1 + rand() % 6;
}