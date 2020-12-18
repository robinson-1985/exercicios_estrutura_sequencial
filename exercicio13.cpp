/* 13. Elabore um programa que leia o tamanho do lado de um quadrado e informe a área 
e o perímetro do quadrado. (Perímetro = 4 * L; área = L ^ 2).*/

#include <stdio.h>
int main(){
    int lado, quadrado, area_quadrado, perimetro_quadrado;
    printf("Declare o tamanho do lado do quadrado: ");
    scanf("%d", &lado);

    perimetro_quadrado = 4 * lado;
    printf("O perímetro do quadrado é: %d \n", perimetro_quadrado);

    area_quadrado = lado ^ 2; 
    printf("A área do quadrado é: %d \n", area_quadrado);

    getchar ();
    return 0;
}