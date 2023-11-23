#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int idades[5] = {1,4,8,12,16};
    int i;

    for (i = 4; i >= 0; i--) {
        printf("%d\n", idades[i]);

    }

    return 0;
}