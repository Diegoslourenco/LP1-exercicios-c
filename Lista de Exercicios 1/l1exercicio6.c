// 6. Crie uma função em linguagem C que receba 3 números e retorne o menor valor, use a função da questão 4.

# include <stdio.h>

float verificaMenorDois(float, float);
float verificaMenorTres(float, float, float);

int main(void)
{
    float numero1, numero2, numero3;

    // Recebendo os números
    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);

    printf("Menor valor: %f", verificaMenorTres(numero1, numero2, numero3));

    return 0;
}

// Recebe dois números e retorna o menor deles // vem do exercicio4
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

// Recebe três valores e retorna o menor
float verificaMenorTres(float numero1, float numero2, float numero3)
{
    return verificaMenorDois(verificaMenorDois(numero1, numero2), numero3);
}