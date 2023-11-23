#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int idades[5] = {1,4,8,25,16};
    int i;

    for (i = 0; i < 5; i++) {
        if (idades[i] % 2 == 0) {
        printf("%d\n", idades[i]);
            
        }
        

    }

    return 0;
}