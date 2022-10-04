/* 3. Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas 
oferecendo desconto. Faça um programa que possa receber um valor de um produto e que 
escreva o novo valor tendo em vista que o desconto foi de 9%.*/

#include <stdio.h>
int main(){
    float valor_produto, novo_valor, desconto;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor_produto);

    novo_valor = valor_produto - (valor_produto * 0.09);
    printf("O novo valor do produto com desconto é: %.2f", novo_valor); 

    getchar ();
    return 0;
}