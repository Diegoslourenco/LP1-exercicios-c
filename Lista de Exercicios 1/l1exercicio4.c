// 4. Crie uma função em linguagem C que receba 2 números e retorne o menor valor.

# include <stdio.h>

float verificaMenorDois(float, float);

int main(void)
{
    float numero1, numero2;

    // Recebendo os números
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("Menor valor: %f", verificaMenorDois(numero1, numero2));

    return 0;
}

float verificaMenorDois(float numero1, float numero2)
{
    if (numero1 <= numero2)
    {
        return numero1;
    }
    else
    {
        return numero2;
    }
}