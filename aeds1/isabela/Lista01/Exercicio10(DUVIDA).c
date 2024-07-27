#include <stdio.h>
/*
Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista
estava dirigindo nela. Se o motorista estiver dentro do limite de velocidade, imprima a
mensagem “Motorista respeitou a lei”. Se o motorista tiver ultrapassado a velocidade
máxima permitida, calcule e imprima o valor da multa a ser cobrada, sabendo que os
valores a serem cobrados são os seguintes:
    ● 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex: se a
velocidade máxima for 50km/h e o motorista estiver a 60km/h ou a 56km/h);
    ● 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida;
    ● 200 reais, se estiver acima de 30km/h da velocidade permitida.
*/
int main()
{
    float velMax, velMot;

    printf("Digite a velocidade maxima da avenida: ");
    scanf("%f", &velMax);
    printf("Digite a velocidade do motorista: ");
    scanf("%f", &velMot);

    if(velMot < velMax){
        printf("O motorista respeitou a lei");
    }

    return 0;
}