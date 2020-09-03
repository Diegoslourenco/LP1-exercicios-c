// 6. Crie uma função em linguagem C que receba 3 números e retorne o menor valor, use a função da questão 5.

# include <stdio.h>

int verifica_menor_dois(int, int);
int verifica_maior(int, int, int);
int verifica_menor_tres(int, int, int);

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

    printf("Menor valor: %i", verifica_menor_tres(numero1, numero2, numero3));

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

// Recebe três números e retorna o maior // vem do exercicio5
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

int verifica_menor_tres(int numero1, int numero2, int numero3)
{
    if (verifica_maior(numero1, numero2, numero3) == numero1)
    {
        return verifica_menor_dois(numero2, numero3);
    }
    else if (verifica_maior(numero1, numero2, numero3) == numero2)
    {
        return verifica_menor_dois(numero1, numero3);
    }
    else
    {
        return verifica_menor_dois(numero1, numero2);
    }
}