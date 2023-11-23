#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear"); 
    int num = 0, rest = 0 , result = 0, op=1;

    printf("Digite um número decimal\n");
    scanf("%d", &num);

    while ( num > 0 ){
        rest = num % 2;
        num = num / 2;
        result = result + rest * op;
        op = op * 10;
       
    }
    
    printf("O número decimal convertido em binário é %d\n", result);
    return 0;

    }