#include <stdio.h>

int main(){
    //Variáveis
    float salinicial; //o salário inicial do funcionário
    float salfinal; //o salário final do funcionário

    //Escopo
    printf("Digite o seu salário, em R$: ");
    scanf("%f", &salinicial);

    /*
    O que o exercício pede?

    Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o seu novo salário, com 15% de aumento.

    a mesma lógica do exercício 12

    ao invés de calcular primeiro 15% do salário inicial e depois somar tudo, é mais dinâmico multiplicar por 1.15

    Por que 1.15?

    Pois 1.15 é 115 / 100, 115% (100% + 15%)

    assim, é possível trabalhar com algo mais compacto, dessa forma:
    */

    salfinal = salinicial * 1.15; // o salário vai ficar com 15% de aumento aqui

    printf("\nDado o salário inicial de R$ %.2f, o novo salário, com 15 por cento de aumento, vai ser de R$ %.2f", salinicial, salfinal);
}