// 4. O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y.
// Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x e y.
// O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; caso contrário, 
// mdc(x,y) é mdc (y, x%y), onde % é o operador resto.

# include <stdio.h>

int maximoDivisorComum(int, int);

int main(void)
{
    int numero1 = 20;
    int numero2 = 12;
    int maximo;

    printf("%i", maximoDivisorComum(numero1, numero2));

    return 0;
}

int maximoDivisorComum(int numero1, int numero2)
{
    if (numero2 == 0) // base da recursao
    {
        return numero1;
    }
    else
    {
        return maximoDivisorComum(numero2, numero1 % numero2);
    }
}