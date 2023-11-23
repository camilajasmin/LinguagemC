#include <stdio.h>
#include <stdlib.h>
 int main(){
    system("clear");
    int num, cont, result;
    result = 0;

    printf("Digite um número:\n");
    scanf("%d", &num);

    for (cont = 0; cont <= 10; cont++){
        result = num*cont;
        printf("%d x %d = %d\n", num, cont, result);
        
        
    }
    return 0;
    

    }