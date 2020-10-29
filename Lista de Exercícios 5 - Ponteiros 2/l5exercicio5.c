/*
5. Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre
dentro da primeira. Use aritmética de ponteiros para acessar os caracteres  ́das strings.
*/

# include <stdio.h>

int verificaTexto(char*, char*);
int contaComprimentoTexto(char*);

int main(void)
{
    char* texto1 = "Diego da Pablo Lourenco";
    char* texto2 = "Pablo";

    int comprimento = contaComprimentoTexto(texto1);
    //printf("%i", comprimento);
    printf("%i", verificaTexto(texto1, texto2));

    return 0;
}

int verificaTexto(char* enderecoContem, char* enderecoContido)
{
    int comprimentoContem = contaComprimentoTexto(enderecoContem);
    int comprimentoContido = contaComprimentoTexto(enderecoContido);
    char* inicioEnderecoContido = enderecoContido;
    int contador = 0;

    for (int i = 0; i < comprimentoContem; i++)
    {     
        if (*enderecoContem == *enderecoContido)
        {
            enderecoContem += 1;
            enderecoContido += 1;
            contador += 1;

            for (int j = 0; j < comprimentoContido; j++)
            {
                if (*enderecoContem == *enderecoContido)
                {
                    enderecoContem += 1;
                    enderecoContido += 1;
                    contador += 1;
                }
                else
                {
                    if (comprimentoContido == contador)
                    {
                        return 0;
                    }
                    else
                    {
                        enderecoContem -= 1;
                        enderecoContido = inicioEnderecoContido;
                        contador = 0;
                        break;       
                    }   
                }  
            }
        }

        enderecoContem += 1;
    }

    return 1;
}

int contaComprimentoTexto(char* enderecoTexto)
{
    int comprimento = 0;

    while (*enderecoTexto != '\0')
    {
        comprimento += 1;
        enderecoTexto += 1;
    }

    return comprimento;
}