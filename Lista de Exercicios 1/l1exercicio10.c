// 10. Um professor, muito legal, fez 3 provas durante um semestre mas só vai levar em conta as duas notas mais altas
// para calcular a média.
// Faça uma aplicação em C que peça o valor das 3 notas, mostre como seria a média com essas 3 provas, a média com as 2
// notas mais altas, bem como sua nota mais alta e sua nota mais baixa.

# include <stdio.h>
# include <math.h>

float calcula_media_duas(float, float);
float calcula_media_tres(float, float, float);
float verificaMenorTres(float, float, float);
float verificaMenorDois(float, float);
float verificaMaior(float, float, float);
float verificaIntermediario(float, float, float);

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

    printf("Media 2 notas: %.2f\n", calcula_media_duas(verificaMaior(nota1, nota2, nota3), 
                                                    verificaIntermediario(nota1, nota2, nota3)));

    printf("Maior nota: %.2f\n", verificaMaior(nota1, nota2, nota3));

    printf("Menor nota: %.2f", verificaMenorTres(nota1, nota2, nota3));

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

float verificaMenorTres(float numero1, float numero2, float numero3)
{
    return verificaMenorDois(verificaMenorDois(numero1, numero2), numero3);
}

float verificaMenorDois(float numero1, float numero2)
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

float verificaMaior(float numero1, float numero2, float numero3)
{
    if (verificaMenorDois(numero1, numero2) != numero1 && verificaMenorDois(numero1, numero3) != numero1)
    {
        return numero1;
    }
    else if (verificaMenorDois(numero2, numero3) != numero2)
    {
        return numero2;
    }
    else
    {
        return numero3;
    }
}

float verificaIntermediario(float numero1, float numero2, float numero3)
{
    if (verificaMaior(numero1, numero2, numero3) != numero1 && verificaMenorTres(numero1, numero2, numero3) != numero1)
    {
        return numero1;
    }
    else if (verificaMaior(numero1, numero2, numero3) != numero2 && verificaMenorTres(numero1, numero2, numero3) != numero2)
    {
        return numero2;
    }
    else
    {
        return numero3;
    }
}