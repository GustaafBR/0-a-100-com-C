#include <stdio.h>

int main(){
    // Variáveis
    float numprincipal;
    float dobronum;
    float terçapartenum;

    // Escopo
    printf("Digite um número: ");
    scanf("%f", &numprincipal);
    //---------------------------------
    dobronum = numprincipal * 2;
    printf("\nO dobro de %.2f é %.2f", numprincipal, dobronum);
    //---------------------------------
    terçapartenum = numprincipal /3;
    printf("\nA terça parte de %.2f é %.2f", numprincipal, terçapartenum);
}