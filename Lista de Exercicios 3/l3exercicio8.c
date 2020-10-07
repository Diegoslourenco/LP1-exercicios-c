// 8. A multiplicação de dois números inteiros pode ser feita através de somas sucessivas.
// Proponha um algoritmo recursivo Multip_Rec(n1,n2) que calcule a multiplicação de dois inteiros.

# include <stdio.h>

int multiplicaRecursivo(int, int);

int main(void)
{
    int numero1 = 3;
    int numero2 = 15;

    printf("%i", multiplicaRecursivo(numero1, numero2));

    return 0;
}

int multiplicaRecursivo(int numero1, int numero2)
{
    int soma = 0;

    if (numero1 == 1) // base da recursao
    {
        soma = numero2;
        return soma;
    }
    else
    {
        soma += numero2;
        soma += multiplicaRecursivo(numero1 - 1, numero2);
    }

    return soma;
}

