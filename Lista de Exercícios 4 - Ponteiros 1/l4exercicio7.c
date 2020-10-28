/*7.
Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. 
A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. 
Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro.
Imprima os valores de A e B na função principal.*/

# include <stdio.h>

void somaValores(int*, int*);

int main(void)
{   
    int numero1;
    int numero2;

    printf("Digite o valor 1: ");
    scanf("%i", &numero1);
    printf("Digite o valor 2: ");
    scanf("%i", &numero2);

    somaValores(&numero1, &numero2);
    printf("\nValor 1: %i\nValor 2: %i", numero1, numero2);

    return 0;
}

void somaValores(int* endereco1, int* endereco2)
{
    *endereco1 = *endereco1 + *endereco2;

    return;
}