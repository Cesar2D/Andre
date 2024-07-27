#include <stdio.h>
/*
Construa um programa que lê uma opção conforme abaixo (usar estrutura SWITCH) e o
salário atual do funcionário, calcula e exibe o novo salário:
A = aumento de 8% no salário;
B = aumento de 11% no salário;
C = aumento fixo no salário
(de R$ 350,00 se o salário atual for até R$ 1000 e de R$ 200,00 se o salário atual for
maior que R$ 1000).
*/
int main()
{
    char op;
    float salario;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Digite qual opcao A, B ou C");
    scanf("%c", &op);

    switch (op)
    {
    case 'A'
        salario *= 1.08;
        break;

    case 'B' 
        salario *= 1.11;
        break;
    
    case 'C'
        if(salario <= 1000){
            salario += 350;
        } else {
            salario += 200;
        }

        default:
        break;
    }

    printf("O novo salario e: %.2f", &salario);

    return 0;
}