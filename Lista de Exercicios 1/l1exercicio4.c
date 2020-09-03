// 4. Crie uma função em linguagem C que receba 2 números e retorne o menor valor.

# include <stdio.h>

int verifica_menor_dois(int, int);

int main(void)
{
    int numero1, numero2;

    // Recebendo os números
    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);

    printf("Menor valor: %i", verifica_menor_dois(numero1, numero2));

    return;
}

int verifica_menor_dois(int numero1, int numero2)
{
    if (numero1 <= numero2)
    {
        return numero1;
    }
    else
    {
        return numero2;
    }
}