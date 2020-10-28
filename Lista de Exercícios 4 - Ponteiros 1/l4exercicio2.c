/*2. Escreva um programa que contenha duas variáveis inteiras. 
   Compare seus endereços e exiba o maior endereço.*/

# include <stdio.h>

int comparaEnderecos(int*, int*);

int main(void)
{
    int numero1 = 10;
    int numero2 = 20;

    printf("Maior endereco: %i", comparaEnderecos(&numero1, &numero2));

    return 0;
}

int comparaEnderecos(int* endereco1, int* endereco2)
{
    if (endereco1 > endereco2)
    {
        return endereco1;
    }
    else
    {
        return endereco2;
    }
}