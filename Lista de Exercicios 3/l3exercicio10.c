// 10. Escreva uma função recursiva que dado um número n, gere todas as possíveis combinações com
// as n primeiras letras do alfabeto. Ex.: n = 3. Resposta: ABC, ACB, BAC, BCA, CAB, CBA.

# include <stdio.h>
# include <string.h>

typedef char * string;

void permutacaoLetras(string, int);
void trocaCaracter(string*, int, int);

int main(void)
{
    int numero = 3;
    string letrasAlfabeto = {"ABCDEFGHIJKLMNOPQRSTUVXZWYK"};
    string letras[3];

    for (int i = 0; i < numero; i++)
    {
        letras[i] = letrasAlfabeto[i];
    }


    permutacaoLetras(letras, numero);

    return 0;
}

void permutacaoLetras(string letras, int numero)
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
            trocaCaracter(letras, numero, i);
            permutacaoLetras(letras, numero + 1);
            trocaCaracter(letras, i, numero);
        }
    }
    
    return;

}

void trocaCaracter(string* letras, int primeiro, int segundo)
{
    char temp;
    temp = letras[primeiro];
    letras[primeiro] = letras[segundo];
    letras[segundo] = temp;

    return;
}