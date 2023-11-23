#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano;
    system("clear");

    printf("Digite um ano para saber se ele é bissexto:\n");
    scanf("%d",&ano);

    if(ano %4 == 0)
        printf("O ano de %d é um ano bissexto\n", ano);
    else
        printf("O ano %d NÃO é um ano bissexto\n", ano);
    
    return 0;
}