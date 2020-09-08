// 5. Crie uma função em linguagem C que receba 3 números e retorne o maior valor, use a função da questão 4.

# include <stdio.h>

float verificaMenorDois(float, float);
float verificaMaior(float, float, float);

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

    printf("Maior valor: %f", verificaMaior(numero1, numero2, numero3));

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

// Recebe 3 números e retorna o maior deles
float verificaMaior(float numero1, float numero2, float numero3)
{
    if (verificaMenorDois(numero1, numero2) != numero1 && verificaMenorDois(numero1, numero3) != numero1)
    {
        return numero1;
    }
    else if (verificaMenorDois(numero2, numero3) != numero2)
    {
        return numero2;
    }
    else
    {
        return numero3;
    }
}