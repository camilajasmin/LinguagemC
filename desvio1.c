#include <stdio.h>

int main(){
    int n1;

    printf("Digite um número:\n");
    scanf("%d", &n1);

    if(n1>10)
        printf("O número %d é maior que dez\n", n1);

    else
        printf("O número %d é menor que 10\n", n1);

    return 0;

}