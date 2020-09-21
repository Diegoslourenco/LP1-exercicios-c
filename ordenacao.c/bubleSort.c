# include <stdio.h>
# define TAM 10

int main(void)
{
    int temp = 0;
    int v[TAM] = {3, 2, 6, 9, 8, 7, 5, 3, 9, 1};

    for (int i = 0; i < TAM - 1; i++)
    {
        for (int j = i+1; j < TAM; j++)
        {
            if (v[j] < v[i])
            {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("%i", v[i]);
    }

    return 0;

}