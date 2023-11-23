#include <stdio.h>
#include <stdlib.h>

char* msg();

int main(){
    system("clear");
    printf("%s\n", msg());
    
}

char* msg (){
    return "olá";
}