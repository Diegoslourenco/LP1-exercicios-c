// Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N.
// Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.

# include <stdio.h>

int verificaRepeticao(int, int);

int main(void)
{
    int digito = 2;
    int numero = 76202112;

    printf("%i", verificaRepeticao(digito, numero));
    
    return 0;
}

int verificaRepeticao(int digito, int numero)
{
    int repeticao = 0;

    if (numero == 0) // base repeticao
    {
        repeticao = 0;

        return repeticao;
    }
    else
    {
        if ((numero % 10) == digito)
        {
            repeticao++;
        }

        repeticao += verificaRepeticao(digito, numero / 10);
    }

    return repeticao;
}