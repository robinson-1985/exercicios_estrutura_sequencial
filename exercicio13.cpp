/* 13. Elabore um programa que leia o tamanho do lado de um quadrado e informe a área 
e o perímetro do quadrado. (Perímetro = 4 * L; área = L ^ 2).*/

#include <stdio.h>
int main(){
    int lado, quadrado, area, perimetro;
    printf("Declare o tamanho do lado do quadrado: ");
    scanf("%d", &lado);

    perimetro = 4 * lado;
    printf("O perímetro do quadrado é: %d \n", perimetro);

    area = lado * lado; 
    printf("A área do quadrado é: %d \n", area);

    getchar ();
    return 0;
}