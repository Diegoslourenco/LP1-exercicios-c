// 3. Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma
// equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'.
// Usando as 2 funções anteriores, crie um aplicativo que calcula as raízes de uma equação do
// 2o grau: ax² + bx + c=0.
// Para ela existir, o coeficiente 'a' deve ser diferente de zero.
// Caso o delta seja maior ou igual a zero, as raízes serão reais.
// Caso o delta seja negativo, imprimir erro.

# include <stdio.h>
# include <math.h>

int verificaNulo(float);
int verificaPositivo(float);
float calculaDelta(float, float, float);
float calculaRaizes(float, float, float);

int main(void)
{
    float a, b, c, delta, raiz1, raiz2;

    // Recebendo valores a, b e c
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Verificando se a é diferente de 0
    if (verificaNulo(a) == 1)
    {
        printf("a deve ser diferente de 0");
        return 1;
    }

    delta = calculaDelta(a, b, c);

    // Calcula e imprime raízes
    calculaRaizes(delta, a, b);
   
}

// Calcula e retorna o valor de delta
float calculaDelta(float a, float b, float c)
{
    return (b * b) - 4 * a * c;
}

// Verificando se o valor é positivo ou não // vem do exercicio1
int verificaPositivo(float valor)
{
    if (valor > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Verificando se o valor é nulo ou não // vem do exercicio2
int verificaNulo(float valor)
{
    if (valor == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Calcula raízes da equação, se existir as imprime, do contrário imprime erro
float calculaRaizes(float delta, float a, float b)
{
     if (verificaPositivo(delta) == 1 || verificaNulo(delta) == 1)
    {
        printf("As raizes sao: %f e %f", (- b + sqrt(delta)) / (2 * a), (- b - sqrt(delta)) / (2 * a));
        return 0;
    }
    else
    {
        printf("Nao existem raizes reais para esses valores de a, b e c!");
        return 1;
    }
}