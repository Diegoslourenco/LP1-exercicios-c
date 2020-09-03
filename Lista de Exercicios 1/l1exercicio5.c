// 5. Crie uma função em linguagem C que receba 3 números e retorne o maior valor, use a função da questão 4.

# include <stdio.h>

int verifica_menor_dois(int, int);
int verifica_maior(int, int, int);

int main(void)
{
    int numero1, numero2, numero3;

    // Recebendo os números
    printf("Digite o primeiro numero: ");
    scanf("%i", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%i", &numero2);
    printf("Digite o terceiro numero: ");
    scanf("%i", &numero3);

    printf("Maior valor: %i", verifica_maior(numero1, numero2, numero3));

    return;
}

// Recebe dois números e retorna o menor deles // vem do exercicio4
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

int verifica_maior(int numero1, int numero2, int numero3)
{
    if (verifica_menor_dois(numero1, numero2) != numero1 && verifica_menor_dois(numero1, numero3) != numero1)
    {
        return numero1;
    }
    else if (verifica_menor_dois(numero2, numero3) != numero2)
    {
        return numero2;
    }
    else
    {
        return numero3;
    }
}