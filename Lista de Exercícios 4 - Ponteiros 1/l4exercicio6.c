/*6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne
a soma do dobro dos dois numeros lidos. 
A função deverá armazenar o dobro  de A na propria variável A e o dobro de B na própria variável B.*/

# include <stdio.h>

int somaDobro(int*, int*);

int main(void)
{
    int numero1;
    int numero2;
    int dobro;

    printf("Digite o valor 1: ");
    scanf("%i", &numero1);
    printf("Digite o valor 2: ");
    scanf("%i", &numero2);

    dobro = somaDobro(&numero1, &numero2);
    printf("\nValor 1: %i\nValor 2: %i\nDobro: %i", numero1, numero2, dobro);

    return 0;
}

int somaDobro(int* endereco1, int* endereco2)
{
    *endereco1 = *endereco1 * 2;
    *endereco2 = *endereco2 * 2;
    
    return *endereco1 + *endereco2;
}