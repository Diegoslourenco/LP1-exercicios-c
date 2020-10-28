/*1.Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real,
e char. Associe as variaveis aos ponteiros (use &). 
Modifique os valores de cada variavel usando os ponteiros. 
Imprima os valores das variáveis antes e após a modificação.*/

   # include <stdio.h>

   int main(void)
   {
    
        int inteiro = 10;
        double real = 10.5;
        char letra = 'd';

        int* ponteiroInteiro = &inteiro;
        double* ponteiroReal = &real;
        char* ponteiroCaracter = &letra;

        //Imprimindo e modificando inteiro
        printf("Inteiro: %i", inteiro);
        *ponteiroInteiro = 20;
        printf("\nInteiro modificado: %i", inteiro);

        //Imprimindo e modificando real
        printf("\nReal: %.2f", real);
        *ponteiroReal = 20.4;
        printf("\nReal modificado: %.2f", real);

        //Imprimindo e modificando char
        printf("\nChar: %c", letra);
        *ponteiroCaracter = 'a';
        printf("\nChar modificado: %c", letra);

        return 0;
   }