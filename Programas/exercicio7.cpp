/* 7. Faça um programa que após a entrada de uma determinada distância entre dois 
pontos(Km), e uma determinada velocidade(Km/h), diga qual o tempo médio que levará 
para chegada à esse local e qual a velocidade em metros/segundos.*/

#include <stdio.h>
int main(){
    float distancia, velocidade, tempo_medio;
    printf("Digite a distância que você vai percorrer em km: ");
    scanf("%f", &distancia);
    printf("Digite a velocidade média em km/h: ");
    scanf("%f", &velocidade);

    tempo_medio = distancia / velocidade;
    velocidade = velocidade / 3.6;

    printf("O tempo medio será: %.2f hora(s), e a velocidade em m/s é: %.2f\n", tempo_medio, velocidade);


    getchar ();
    return 0;
}