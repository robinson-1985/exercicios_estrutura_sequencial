/* 9. Ler uma temperatura em graus Celsius e apresentá - ­la convertida em graus 
Fahrenheit. A fórmula de conversão é: F=(9*C+160) / 5, sendo F a temperatura em 
Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>
int main() {
    float celsius, farenheit;
    printf("Digite a temperatura em °C: ");
    scanf("%f", &celsius);

    farenheit = (9 * celsius + 160) / 5;
    printf("A temperatura em °C para °F é: %.2f °F \n", farenheit);

    getchar ();
    return 0;
}