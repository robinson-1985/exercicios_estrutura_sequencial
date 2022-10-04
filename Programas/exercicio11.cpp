/* 11. Faça um programa que receba o preço de custo de um produto e mostre o valor de 
venda. Sabe-­se que o preço de custo receberá um acréscimo de acordo com um percentual 
informado pelo usuário.*/

#include <stdio.h>
int main(){
    float preco_custo, preco_venda, percentual;
    printf("Digite o preço de custo do produto: R$ ");
    scanf("%f", &preco_custo);
    printf("Digite o percentual de acréscimo do produto: ");
    scanf("%f", &percentual);

    percentual = (percentual/100) * preco_custo;
    preco_venda = preco_custo + percentual;
    printf("O preço de venda é: R$ %.2f \n", preco_venda);

    getchar ();
    return 0;
} 