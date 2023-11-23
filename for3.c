#include <stdio.h>
#include <stdlib.h>
 int main(){
    system("clear");
    int anoA, anoB, cont, qtd;
    qtd = 0;

    printf("Digite o ano inicial\n");
    scanf("%d", &anoA);

    printf("Digite o ano final\n");
    scanf("%d", &anoB);

   

    for(cont = anoA; cont <= anoB; cont++){
        if (cont %4 == 0){
            printf("o ano %d é bissexto\n", cont);
            qtd++;
        }
        
    }
    printf("A quantidade de anos bissexto é %d\n",qtd);
    return 0;
    }