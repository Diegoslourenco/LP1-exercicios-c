# include <stdio.h>

int main()
{
    int vetor[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int *ponteiro1;

    ponteiro1 = &vetor[0];
    printf("*ponteiro1 = %i", *ponteiro1);

    ponteiro1 = vetor;
    printf("\n*ponteiro1 = %i", *ponteiro1);

    ponteiro1 = &vetor[1];
    printf("\n*ponteiro1 = %i", *ponteiro1);

    ponteiro1 = vetor;
    printf("\n*ponteiro1 = %i", *(ponteiro1 + 1));
}