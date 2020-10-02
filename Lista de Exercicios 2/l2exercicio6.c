// 6. Faça um programa que leia o tamanho de um vetor A e, em seguida, leia os n elementos do vetor.
// Considere que o valor máximo de elementos que o vetor A pode armazenar é 100. Por fim, 
// calcule e mostre a média dos elementos de índice par e o produto dos elementos de índice ímpar.

# include <stdio.h>
# define MAX 100

int main(void)
{
    int i, tamanho, countPar = 0;
    double par = 0, impar = 1;

    // Recebendo tamanho do vetor
    printf("Digite o tamanho do vetor A: ");
    scanf("%i", &tamanho);

    // Verificando se o valor e menor que o maximo e maior que zero
    if (tamanho > MAX || tamanho <= 0)
    {
        printf("O minimo valor deve ser 1 e maximo de elementos deve ser 100!");
        return 1;
    }

    // Definindo tamanho do vetor
    int A[tamanho];

    // Recebendo os valores e armazenando no vetor
    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o valor %i: ", i+1);
        scanf("%i", &A[i]);
    }

    // Calculando a soma dos elementos de indice par e o produto dos impares
    for (i = 0; i < tamanho; i++)
    {
        if (i % 2 == 0)
        {
            par += A[i];
            countPar++;
        }
        else
        {
            impar *= A[i];
        }
    }

    // Dividindo pelo numero de indices pares para obter media
    par /= (double)countPar;

    if (tamanho > 1)
    {
        printf("Media de indice pares: %.2f\nProduto indice impares: %.2f", par, impar);
    }
    else
    {
        printf("Media de indice pares: %.2f", par);        
    }

    return 0;
}