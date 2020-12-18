/* 2. Faça um programa que o usuário informe os valores dos catetos de um triângulo 
retângulo e que ao final escreva a sua hipotenusa.*/

#include <stdio.h>
#include <math.h>
int main(){
    float cateto1, cateto2, hipotenusa;
    printf("Informe o 1° cateto: ");
    scanf("%f", &cateto1);
    printf("Informe o 1° cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt (pow(cateto1, 2) + pow(cateto2, 2));
    printf("O valor da hipotenusa é: %d \n", hipotenusa);

    getchar ();
    return 0;
}