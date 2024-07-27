#include <stdio.h>
/*
Fazer um programa para:
● ler um símbolo do teclado;
● identificar com a estrutura SWITCH e mostrar as seguintes mensagens, segundo o
caso:
o "SINAL DE MENOR"
o "SINAL DE MAIOR"
o "SINAL DE IGUAL"
o "OUTRO SINAL"
*/
int main()
{
    char simb;

    printf("Digite um sinal do teclado: ");
    scanf("%c", &simb);

    switch (simb)
    {
    case '<' 
        printf("Sinal de Menor");
        break;
    case '>' 
        printf("Sinal de Maior");
        break;
    case '='
        printf("Sinal de Igual");
        break 
    default:
        printf("Outro Sinal");
        break;
    }
}