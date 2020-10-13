// 9. Escreva uma função recursiva que dado um número n, gere todas as possíveis combinações com
// as n primeiras letras do alfabeto. Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA.

# include <stdio.h>
# include <string.h>

void permutaLetras(char*, int);
void trocaCaracter(char*, int, int);

int main(void)
{
    int numero = 3;
    int inicio = 0;
    char letrasAlfabeto[26] = {"ABCDEFGHIJKLMNOPQRSTUWVXYZ"};
    char letras[numero];

    for (int i = 0; i < numero; i++)
    {
        letras[i] = letrasAlfabeto[i];
    }

    permutaLetras(letras, inicio);

    return 0;
}

void permutaLetras(char* letras, int numero)
{
    int comprimentoLetras = strlen(letras);

    if (numero == comprimentoLetras) // base da recursao
    {
        printf("%s\n", letras);
        return;
    }
    else
    {
        for (int i = numero; i < comprimentoLetras; i++)
        {
            // troca os caracteres de lugar
            trocaCaracter(letras, numero, i);

            // chama a funcao
            permutaLetras(letras, numero + 1);

            // troca de volta
            trocaCaracter(letras, i, numero);
        }

        return;
    }
}

void trocaCaracter(char* letras, int primeiro, int segundo)
{
    char temp;
    temp = letras[primeiro];
    letras[primeiro] = letras[segundo];
    letras[segundo] = temp;

    return;
}