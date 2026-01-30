#include <stdio.h>

int main(){
    char nome[15];

    printf("Olá, qual é o seu nome ? ");
    scanf("%s", &nome);
    printf("\nOlá, %s, é um prazer te conhecer!\n", nome);
}