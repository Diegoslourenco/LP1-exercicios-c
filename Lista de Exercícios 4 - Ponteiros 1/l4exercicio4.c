/*4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas  2 variaveis
e troque o seu conteúdo.
Esta função é chamada passando duas  variaveis A e B, por exemplo e, após a execução da função,
A conterá o valor de B e B  terá  valor de A.*/

# include <stdio.h>

void trocaValor(int*, int*);

int main(void)
{
    int numero1;
    int numero2;

    printf("Digite o valor 1: ");
    scanf("%i", &numero1);
    printf("Digite o valor 2: ");
    scanf("%i", &numero2);

    trocaValor(&numero1, &numero2);
    printf("\nValor 1: %i\nValor 2: %i", numero1, numero2);

    return 0;
}

void trocaValor(int* endereco1, int* endereco2)
{
    int aux = 0;

    aux = *endereco1;
    *endereco1 = *endereco2;
    *endereco2 = aux;

    return;

}