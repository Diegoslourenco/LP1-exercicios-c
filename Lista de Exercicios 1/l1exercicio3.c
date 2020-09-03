// 3. Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma
// equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'.
// Usando as 2 funções anteriores, crie um aplicativo que calcula as raízes de uma equação do
// 2o grau: ax² + bx + c=0.
// Para ela existir, o coeficiente 'a' deve ser diferente de zero.
// Caso o delta seja maior ou igual a zero, as raízes serão reais.
// Caso o delta seja negativo, as reais serão complexas e da forma: x + iy

# include <stdio.h>
# include <math.h>

int verifica_nulo(int);
int verifica_positivo(int);
int calcula_delta(int, int, int);

int main(void)
{
    int a, b, c, delta, raiz1, raiz2;

    // Recebendo valores a, b e c
    printf("Digite o valor de a: ");
    scanf("%i", &a);
    printf("Digite o valor de b: ");
    scanf("%i", &b);
    printf("Digite o valor de c: ");
    scanf("%i", &c);

    // Verificando se a é diferente de 0
    if (verifica_nulo(a) == 1)
    {
        printf("a deve ser diferente de 0");
        return;
    }

    delta = calcula_delta(a, b, c);

    // Cálculo das raízes
    if (verifica_positivo(delta) == 1 || verifica_nulo(delta) == 1)
    {
        raiz1 = (- b + sqrt(delta)) / 2;
        raiz2 = (- b - sqrt(delta)) / 2;
        printf("As raizes sao: %i e %i", raiz1, raiz2);
    }
    else
    {
        printf("Nao existem raizes reais para esses valores de a, b e c!");
    }

    return 0;
}

int calcula_delta(int a, int b, int c)
{
    return (b * b) - 4 * a * c;
}

// Verificando se o valor é positivo ou não // vem do exercicio1
int verifica_positivo(int valor)
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
int verifica_nulo(int valor)
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