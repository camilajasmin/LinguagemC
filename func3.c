#include <stdlib.h>
#include "mat.h"

int main(){
    system ("clear");
    int num[10] = {78, 4, 28, 3, 14, 46, 3, 65, 22, 13};

    printf("a soma dos valores é %d\n", soma(num,10));
    printf("o maior valor é %d\n", max(num,10));

    return 0; 
}
