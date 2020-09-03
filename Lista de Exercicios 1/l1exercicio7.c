//7. Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, um número de 1 até 6.

# include <stdio.h>
# include <stdlib.h>

int joga_dado(void);


int main(void)
{
    printf("%i", joga_dado());

    return;
}

int joga_dado(void)
{
    return rand() % 6;
}