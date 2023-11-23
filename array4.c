#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int x[8] = {20, 45, 13, 109, 3, 56, 10, 33};
    int i = 0, soma = 0;

    while (i < 8) {
        soma += x [i];
        i++;
    }

    printf("O resultado da soma é %d\n", soma);

    return 0;
}