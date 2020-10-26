# include <stdio.h>

void f1(int *num1, int num2);
int z = 10;

int main()
{
    int num = 20;
    printf("z = %i", z);
    f1(&num, num);
    printf("\nConteudo de num = %i", num);
    printf("\nz = %i", z);

    return 0;
}

void f1(int *num1, int num2)
{
    *num1 = *num1 + num2;
    z = *num1;
}