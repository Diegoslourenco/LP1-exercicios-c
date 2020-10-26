# include <stdio.h>

void f1(int *num1, int num2);

int main()
{
    int num = 20;
    f1(&num, num);

    printf("%i", num);

    return 0;
}

void f1(int *num1, int num2)
{
    *num1 = *num1 + num2;
}