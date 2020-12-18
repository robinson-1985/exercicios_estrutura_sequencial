/* 6. Faça um programa que calcule o valor em Reais, correspondente aos dólares que um 
turista possui no cofre do hotel. O programa deve solicitar os seguintes dados: 
Quantidade de dólares guardados no cofre e cotação do dólar naquele dia.*/

#include <stdio.h>
int main(){
    float dolares, cotacao_dolar, real;
    printf("Digite a quantidade de dólares guardados no cofre: $ ");
    scanf("%f", &dolares);
    printf("Digite a cotação do dólar hoje: $ ");
    scanf("%f", &cotacao_dolar);

    real = dolares * cotacao_dolar;
    printf("O valor em reais é: R$ %.2f\n", real);
    

    getchar ();
    return 0;
}