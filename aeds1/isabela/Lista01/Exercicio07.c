#include <stdio.h>
#include <math.h>
/*

*/
int main()
{
    int x;

    printf("digite o valor de x: ");
    scanf("%d", &x);

    if(x <= 1){
        printf("o valor de Y é 1");
    } else if(x > 1 && x <= 2){
        printf("o valor de Y é 2");
    } else if(x > 2 && x <= 3){
        x = pow(x, 2);
        printf("O valor de Y e %d", x);
    } else if(x > 3){
        x = pow(x, 3);
        printf("O valor de Y e %d", x);
    }

    return 0;
}