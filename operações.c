#include <stdio.h>

int main(){
    float n1, n2, so, su, mt, dv;

    printf("Digite um número e tecle enter\n");
    scanf("%f", &n1);

    printf("Digite outro número e tecle enter\n");
    scanf("%f", &n2);

    so = n1 + n2;
    su = n1 - n2;
    mt = n1 * n2;
    dv = n1 / n2;

    printf("\n------------------------------------------------------------------------\n");
    printf("\n---------------------------VEJA OS RESULTADOS---------------------------\n");
    printf("\n-SOMA: %2.2f\n", so);
    printf("\n-SUBTRAÇÃO: %2.2f\n", su);
    printf("\n-MULTIPLICAÇÃO: %2.2f\n", mt);
    printf("\n-DIVISÃO: %2.2f\n", dv);
    printf("\n------------------------------------------------------------------------\n");

    return 0;
    }