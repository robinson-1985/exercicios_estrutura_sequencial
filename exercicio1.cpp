/* 1 ­ Faça um programa que leia quatro números informados pelo usuário e que depois 
imprima a média ponderada, sabendo­-se que os pesos são respectivamente: 1, 2, 3 e 4:*/

#include <stdio.h>
int main(){
    float n1, n2, n3, n4, media_ponderada;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Digite o terceiro número: ");
    scanf("%f", &n3);
    printf("Digite o quarto número: ");
    scanf("%f", &n4);

    media_ponderada = (n1 * 1) + (n2 * 2) + (n3 * 3) + (n4 * 4) / 10;
    // lembre-se que na Media ponderada somam os pesos, que aqui deu 10.
    printf("A média ponderada é: %.2f\n", media_ponderada);

    getchar ();
    return 0;
}