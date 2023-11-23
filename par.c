#include <stdio.h>
#include <stdlib.h> //comando clrscr para limpar a tela

int main(){
    /*comando clrscr(clear screen) para limpar 
    a tela antes de executar os demais comandos*/
    
    
    int num;
    printf("Digite um número e lhe diremos se ele é par ou ímpar:\n");
    scanf("%d", &num);

    if(num %2 == 0)
        printf("O número %d é par\n", num);
    else
        printf("O número %d é ímpar\n", num);

    return 0;
}
