#include <stdio.h>
#include <stdlib.h>
 int main(){
    system("clear");
    int x;
    int tam = 0;
    for(x = 1; x <= 100; x++){
        if( x % 2 == 0) {
            printf("O número %d é par\n",x);
            tam++;

        }
    }
    printf("A quantidade de números pare é %d\n",tam);
    return 0;

 }