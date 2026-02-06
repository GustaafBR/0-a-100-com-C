#include <stdio.h>

int main(){
    int primeironumero;
    int segundonumero;
    //-------------------------------------------
    printf("Digite o primeiro número: ");
    scanf("%d", &primeironumero);
    printf("\nAgora, digite o segundo número: ");
    scanf("%d", &segundonumero);
    printf("\nA soma entre %d e %d é %d", primeironumero, segundonumero, primeironumero + segundonumero);
}