/* 10. A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações 
sem juros. Faça um programa que receba um valor de uma compra e mostre o valor das 
prestações*/

#include <stdio.h>
int main(){
    float preco, prestacao;
    printf("Digite o preço do produto: R$");
    scanf("%f", &preco);

    prestacao = preco / 5;

    printf("O valor de cada prestacão são: R$ %.2f\n", prestacao);

    getchar ();
    return 0;
}