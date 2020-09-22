/* 8. Leia um vetor A de 6 elementos contendo o gabarito da Mega-Sena.
O sorteio consiste na extração de úm6 neros diferentes, no universo de 01 a 60.
 
A seguir, ler um vetor B de 10 elementos contendo uma aposta. 
Escrever quantos pontos fez o apostador, e se ele fez a sena (6 acertos),
a quina (5 acertos) ou a quadra (4 acertos).
*/

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define GABARITO 6
# define APOSTA 10

int main(void)
{
    int i, j;
    int acertos = 0;
    int gabarito[GABARITO], aposta[APOSTA];

    // Iniciando
    srand(time(NULL));

    // Recebendo o gabarito da Mega-Sena variando de 01 a 60
    for (i = 0; i < GABARITO; i++)
    {
        gabarito[i] = 1 + (rand() % 60);
    }

    // Definindo a aposta
    printf("Aposta de 10 numeros\nDigite valores de 01 a 60!\n");
    for (i = 0; i < APOSTA; i++)
    {
        printf("Digite o valor %i: ", i + 1);
        scanf("%i", &aposta[i]);
    }

    for (i = 0; i < GABARITO; i++)
    {
        for (j = 0; j < APOSTA; j++)
        {
            if (gabarito[i] == aposta[j])
            {
                acertos++;
                break;
            }
        }
    }

    if (acertos == 6)
    {
        printf("Voce acertou a Sena!");
    }
    else if (acertos == 5)
    {
        printf("Voce acertou a quina! Foi quase!");
    }
    else if (acertos == 4)
    {
        printf("Voce acertou a quadra! Nao pare de jogar!");
    }
    else
    {
        printf("Voce teve %i acertos! Tente novamente!", acertos);
    }  

    return 0;
}