#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int finalPlaca;

    printf("Digite o final da placa do carro\n");
    scanf("%d", &finalPlaca);

    switch (finalPlaca) {
    case 1:
    printf("Rodízio do veículo na segunda-feira\n");
    break;
    case 2:
    printf("Rodízio do veículo na segunda-feira\n");
    break;

    case 3:
    printf("Rodízio do veículo terça-feira\n");
    break;
    case 4:
    printf("Rodízio do veículo terça-feira\n");
    break;

    case 5:
    printf("Rodízio do veículo na quarta-feira\n");
    break;
    case 6:
    printf("Rodízio do veículo na quarta-feira\n");
    break;

    case 7:
    printf("Rodízio do veículo na quinta-feira\n");
    break;
    case 8:
    printf("Rodízio do veículo na quinta-feira\n");
    break;

    case 9:
    printf("Rodízio do veículo sexta-feira\n");
    break;
    case 0:
    printf("Rodízio do veículo sexta-feira\n");
    break;

    default :
    printf("Este final não existe!\n");

    }
    printf("\n");
    return 0;
}