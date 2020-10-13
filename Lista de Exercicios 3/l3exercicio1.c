//1. Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 – 321.

# include <stdio.h>

int inverteNumero(int, int);

int main(void)
{

    int numero = 123456789;
    int inversor = 0;
    int numeroInvertido;

    numeroInvertido = inverteNumero(numero, inversor);

    printf("Numero invertido: %i", numeroInvertido);

    return 0;

}

int inverteNumero(int numero, int inversor)
{
    if (numero < 10) // base da recursao
    {
        return numero + inversor;
    }
    else
    {
        inversor = (inversor * 10) + ((numero % 10) * 10);
        return inverteNumero(numero / 10, inversor);
    }

    return 0;
}