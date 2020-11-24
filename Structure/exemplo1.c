# include <stdio.h>

typedef struct 
{
    int dia;
    int mes;
    int ano;
} Data;

Data somaData(data);


int main(void)
{
    Data data1;
    Data data2;

    printf("Digite uma data: ");
    scanf("%i %i %i", &data1.dia, &data1.mes, &data1.ano);

    printf("%i/%i/%i", data1.dia, data1.mes, data1.ano);

    data2 = somaData(data1);

    printf("\n%i/%i/%i", data1.dia, data1.mes, data1.ano);
    printf("\n%i/%i/%i", data2.dia, data2.mes, data2.ano);


    return 0;
}

Data somaData(Data inicio)
{
    Data fim;

    fim.dia = inicio.dia + 1;
    fim.mes = inicio.mes + 1;
    fim.ano = inicio.ano + 1;

    return fim;
}