/*3. Escreva um programa que contenha duas variáveis inteiras. 
    Leia essas variáveis do teclado. 
    Em seguida, compare seus endereços e exiba o conteudo do maior endereço.*/

# include <stdio.h>

int comparaEnderecos(int*, int*);

int main(void)
{
    int numero1;
    int numero2;

    printf("Digite o valor 1: ");
    scanf("%i", &numero1);
    printf("\nDigite o valor 2: ");
    scanf("%i", &numero2);
    printf("\nMaior endereco: %i", comparaEnderecos(&numero1, &numero2));

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