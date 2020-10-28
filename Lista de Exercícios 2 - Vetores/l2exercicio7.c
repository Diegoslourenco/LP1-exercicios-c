
/* 7. Escreva um algoritmo em linguagem C que:
   a) leia um vetor A de 12 números reais; 
   b) construa e imprima um vetor B formado da seguinte maneira: 
 
      - os elementos de índice par são os correspondentes de A divididos por 2; 
      - os elementos de índice ímpar são os correspondentes de A multiplicados por 3.
*/

# include <stdio.h>
# define TAM 12

int main(void)
{
    int i;
    double a[TAM], b[TAM];

    // Recebendo os valores do vetor
    for (i = 0; i < TAM; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%lf", &a[i]);
    }

    // Para indices pares dividir por 2 e para impares multiplicar por 3
    for (i = 0; i < TAM; i++)
    {
        if (i % 2 == 0)
        {
            b[i] = a[i] / 2; 
        }
        else
        {
            b[i] = a[i] * 3;
        }    
    }

    for (i = 0; i < TAM; i++)
    {
        printf("%.2f\n", b[i]);
    }

    return 0;
}