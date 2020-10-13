// 6. Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N.
// Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.

# include <stdio.h>

long verificaRepeticao(int, long);

int main(void)
{
    int digito = 2;
    long numero = 762021192;

    printf("%i", verificaRepeticao(digito, numero));
    
    return 0;
}

long verificaRepeticao(int digito, long numero)
{
    if (numero == 0) // base repeticao
    {
        return 0;
    }
    else
    {
        if ((numero % 10) == digito)
        {
            return 1 + verificaRepeticao(digito, numero / 10);
        }
        else
        {
            return verificaRepeticao(digito, numero / 10);
        }    
    }
}