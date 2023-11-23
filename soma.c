/*Programa que realiza a soma entre dois números*/

/*Inclusão da biblioteca de cabeçalho de entrada e saída*/
#include <stdio.h>

/*Função principal*/
int main(){
    int num1, num2, result;

    printf("digite um número:\n");
    scanf("%d", &num1);

    printf("digite outro número:\n");
    scanf("%d", &num2);

    result = num1 + num2;
    printf("o resultado da soma é:%d \n\n", result);

    printf("posição em memória da variável num1 %p\n", &num1);
    printf("posição em memória da variável num2 %p\n", &num2);
    printf("posição em memória da variável result %p\n", &result);




}