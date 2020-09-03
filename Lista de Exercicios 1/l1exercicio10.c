// 10. Um professor, muito legal, fez 3 provas durante um semestre mas só vai levar em conta as duas notas mais altas
// para calcular a média.
// Faça uma aplicação em C que peça o valor das 3 notas, mostre como seria a média com essas 3 provas, a média com as 2
// notas mais altas, bem como sua nota mais alta e sua nota mais baixa.

# include <stdio.h>
# include <math.h>

float calcula_media_duas(float, float);
float calcula_media_tres(float, float, float);
float verifica_menor_tres(float, float, float);
float verifica_menor_dois(float, float);
float verifica_maior(float, float, float);
float verifica_intermediario(float, float, float);

int main(void)
{
    float nota1, nota2, nota3;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Media 3 notas: %.2f\n", calcula_media_tres(nota1, nota2, nota3));

    printf("Media 2 notas: %.2f\n", calcula_media_duas(verifica_maior(nota1, nota2, nota3), 
                                                    verifica_intermediario(nota1, nota2, nota3)));

    printf("Maior nota: %.2f\n", verifica_maior(nota1, nota2, nota3));

    printf("Menor nota: %.2f", verifica_menor_tres(nota1, nota2, nota3));

    return;
}

float calcula_media_duas(float nota1, float nota2)
{
    return (nota1 + nota2) / 2;
}

float calcula_media_tres(float nota1, float nota2, float nota3)
{
    return (nota1 + nota2 + nota3) / 3;
}

float verifica_menor_tres(float numero1, float numero2, float numero3)
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

float verifica_menor_dois(float numero1, float numero2)
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

float verifica_maior(float numero1, float numero2, float numero3)
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

float verifica_intermediario(float numero1, float numero2, float numero3)
{
    if (verifica_maior(numero1, numero2, numero3) != numero1 && verifica_menor_tres(numero1, numero2, numero3) != numero1)
    {
        return numero1;
    }
    else if (verifica_maior(numero1, numero2, numero3) != numero2 && verifica_menor_tres(numero1, numero2, numero3) != numero2)
    {
        return numero2;
    }
    else
    {
        return numero3;
    }
}