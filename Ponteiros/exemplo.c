# include <stdio.h>

void f1(int num);
void f2(int *num);

int main()
{
    int x = 20;

    printf("\nConteudo de x = %i", x);

    //Chamada de f1 por valor (copia de x)
    f1(x);

    printf("\nCOnteudo de x = %i", x);

    //Chamada de f2 por referencia
    f2(&x);
    printf("\nConteudo de x = %i", x);

    return 0;
}

void f1(int num)
{
    num = 40;
}

void f2(int *num)
{
    *num = 60;
}