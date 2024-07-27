#include <stdio.h>
/*
Adaptar o programa acima para que ele calcule o percentual dos valores positivos,
negativos e zeros em relação ao total de valores fornecidos.
*/
int main()
{   // variaveis
    int x , posi, neg, zero;
    int num[x];

    //entrada do valor x
    printf("difite o numero de numeros a ser usado: ");
    scanf("%d", &x);

    //repetiçao para receber o valor em um vetor
    for(int i = 0; i < x; i++){
        printf("Digite o numero %d: ", i);
        scanf("%d", &num[i]);
    }

    // repetiçao para contagem
    for(int i = 0; i < x; i++){
        if(num[i] < 0){
            neg++;
        } else if(num[i] == 0){
            zero++;
        } else if(num[i] > 0){
            posi++;
        }
    }

    //saidas
    printf("Os valores positivos sao: %d\n", posi);
    printf("Os zeros sao: %d\n", zero);
    printf("Os valores negativos sao: %d", neg);
 return 0;
}