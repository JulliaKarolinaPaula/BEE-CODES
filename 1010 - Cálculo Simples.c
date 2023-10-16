#include <stdio.h>

int main(){
int num1, num2;
double peca1, peca2,total;

    scanf("%*d %d %lf", &num1, &peca1);
    scanf("%*d %d %lf", &num2, &peca2);

    total = (num1*peca1)+(num2*peca2);

    printf("VALOR A PAGAR: R$ %.2lf", total);

    return 0;
}