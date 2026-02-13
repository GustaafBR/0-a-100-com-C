#include <stdio.h>

int main(){
    // Variáveis
    float primeiranota;
    float segundanota;
    float media;

    //Programa
    printf("Nota 1: ");
    scanf("%f", &primeiranota);
    //------------------------------
    printf("\nNota 2: ");
    scanf("%f", &segundanota);
    //------------------------------
    media = (primeiranota + segundanota) / 2;
    //------------------------------
    printf("\nA média entre %.2f e %.2f é %.2f", primeiranota, segundanota, media);

    /*
    Atualização - 29/01/2026, 09:47 AM
    
    Lembrei do conceito de usar o .2 para que o resultado apareça sem que repita vários 0
    */
}