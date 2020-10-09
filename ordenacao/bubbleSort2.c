# include <stdio.h>
# define TAM 10

int main(void)
{
    int temp = 0;
    int v[TAM] = {3, 2, 6, 9, 8, 7, 5, 3, 9, 1};

    for (int i = TAM - 1; i >= 1 ; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (v[i] < v[j])
            {
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }

    for (int i = 0; i < TAM - 1; i++)
    {
        printf("%i", v[i]);
    }

    return 0;
}