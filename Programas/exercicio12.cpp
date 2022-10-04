/* 12. O custo ao consumidor de um carro novo é a soma do custo de fábrica com a 
percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos sobre 
o custo de fábrica, e depois a percentagem do distribuidor sobre o resultado). 
Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%. Faça um 
programa que leia o custo de fábrica de um carro e informe o custo ao consumidor 
do mesmo.*/

#include <stdio.h>
int main(){
    float custo_fabrica, percentagem_distribuidor, impostos, custo_consumidor;
    printf("Digite o custo de fábrica do carro: R$ ");
    scanf("%f", &custo_fabrica);

    impostos = custo_fabrica * 0.45;
    percentagem_distribuidor = custo_fabrica * 0.28;
    custo_consumidor = custo_fabrica + impostos + percentagem_distribuidor;

    printf("O custo final ao consumidor é: R$ %.2f\n", custo_consumidor);
    
    getchar ();
    return 0;
}
