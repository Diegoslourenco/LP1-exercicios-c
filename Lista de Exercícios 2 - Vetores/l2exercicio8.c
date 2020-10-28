/* 8. Leia um vetor A de 6 elementos contendo o gabarito da Mega-Sena.
O sorteio consiste na extração de 6 numeros diferentes, no universo de 01 a 60.
 
A seguir, ler um vetor B de 10 elementos contendo uma aposta. 
Escrever quantos pontos fez o apostador, e se ele fez a sena (6 acertos),
a quina (5 acertos) ou a quadra (4 acertos).
*/

# include <stdio.h>
# define GABARITO 6
# define APOSTA 10

int main(void)
{
    int i = 0, j;
    int acertos = 0;
    int gabarito[GABARITO], aposta[APOSTA];

    // Recebendo o gabarito da Mega-Sena variando de 01 a 60
    printf("Digite os valores do gabarito de 01 a 60\n");
    
    while (i < GABARITO)
    {
       printf("Digite o valor %i: ", i+1);
       scanf("%i", &gabarito[i]);

       for (j = 0; j < i; j++)
       {
           if (gabarito[i] == gabarito[j] || gabarito[i] < 1 || gabarito[i] > 60)
           {
               i--;
               break;
           }
       }

       i++;
    }

    // Definindo a aposta de 10 numeros
    printf("\nAposta de 10 numeros\nDigite valores de 01 a 60!\n");
    i = 0;

    while (i < APOSTA)
    {
       printf("Digite o valor %i: ", i+1);
       scanf("%i", &aposta[i]);

       for (j = 0; j < i; j++)
       {
           if (aposta[i] == aposta[j] || aposta[i] < 1 || aposta[i] > 60)
           {
               i--;
               break;
           }
       }

       i++;
    }

    // Verificando numero de acertos
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

    // Imprimindo numero de acertos
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