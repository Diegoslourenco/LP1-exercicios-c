# include <stdio.h>

int main()
{
    int valor = 10;
    int *ponteiro1;     // guarda endereço de um valor
    int **ponteiro2;    // guarda endereço de outro ponteiro
    int ***ponteiro3;

    ponteiro1 = &valor;
    ponteiro2 = &ponteiro1;
    ponteiro3 = &ponteiro2;

    printf("Conteudo de valor: %i", valor);
    printf("\nEndereco de valor: %i", &valor);

    printf("\nConteudo do endereco de ponteiro1: %i", *ponteiro1);
    printf("\nEndereco que ponteiro1 guarda: %i", ponteiro1);
    printf("\nEndereco de ponteiro1: %i", &ponteiro1);
    
    printf("\nEndereco de ponteiro2: %i", &ponteiro2);
    printf("\nConteudo do endereco que ponteiro2: %i", *ponteiro2);
    printf("\nConteudo do conteudo do endereoco de ponteiro2: %i", **ponteiro2);

    printf("\n%i", ponteiro3);

    return 0;
}