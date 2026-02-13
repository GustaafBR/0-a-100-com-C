#include <stdio.h>

int main(){
    // Variáveis
    int numprincipal;
    int antecessor;
    int sucessor;

    // Escopo
    printf("Digite um número: ");
    scanf("%d", &numprincipal);
    //----------------------------
    printf("\nO antecessor de %d é %d", numprincipal, numprincipal - 1);
    //----------------------------
    printf("\nO sucessor de %d é %d", numprincipal, numprincipal + 1);
}