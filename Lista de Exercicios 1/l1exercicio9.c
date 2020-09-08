// 9. Crie um aplicativo de conversão entre as temperaturas Celsius e Farenheit.
// Primeiro o usuário deve escolher se vai entrar com a temperatura em Célsius ou Farenheit, depois a conversão escolhida
// é realizada através de um comando SWITCH.
// Se C é a temperatura em Célsius e F em farenheit, as fórmulas de conversão são: C= 5.(F-32)/9 F= (9.C/5) + 32 

# include <stdio.h>

int main(void)
{
    int entrada, temperatura;

    printf("Digite para converter,\n1 de Celsius para Farenheit ou 2 de Farenheit para Celsius: ");
    scanf("%i", &entrada);
    printf("Digite a temperatura: ");
    scanf("%i", &temperatura);

    printf("%i", converteTemperatura(entrada));

    return;
}

int converteTemperatura(temperatura)
{
    switch (temperatura)
    {
        case 1:
        return (9 * temperatura / 5) + 32;
        
    
        case 2:
        return (5 * (temperatura - 32) / 9);
    }
}