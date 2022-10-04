/* 8. Um sistema de equações lineares da forma ax + by = c 
y = af − cd / ae − bd; x = ce − bf/ ae − bd
dx + ey = f 
pode ser resolvido utilizando-­se as seguintes fórmulas:
Faça um programa para ler os coeficientes(a,b,c,d,e,f) das equações e calcular e exibir
os valores de x e y.*/

#include <stdio.h>
int main(){
    int a, b, c, d, e, f, X, Y;
    printf("os valores do quociente: ");
    scanf("%d" "%d" "%d" "%d",a, b, c, d, e, f);
    X = (c*e - b*f)/(a*e-b*d);
    Y = (a*f - c*d) / (a*e - b*d);

    printf("%d\n", X,Y);
    
    getchar ();
    return 0;
}