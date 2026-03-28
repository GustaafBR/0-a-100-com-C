#include <stdio.h>

int main(){
    //Variáveis
    float precinicial; //o valor normal do produto
    float precfinal; // 95% do valor inicial ( 5% de desconto )

    // Escopo
    printf("Digite, em R$, o valor original do produto: ");
    scanf("%f", &precinicial);
    //-------------------------------
    /*
    O que o exercício está pedindo ?

    - Crie um programa que leia o preço de um produto, calcule e mostre o seu PREÇO PROMOCIONAL, com 5% de desconto.

    Mas, é possível ver que:

    1000% - 5% = 95%

    Ou seja

    - Ao invés de calcular primeiro quanto é 5% do valor original e depois descontar os valores, seria mais eficiente já multiplicar o valor inicial por 0.95 (95 / 100). isso deixa o código mais dinâmico

    Assim...
    */
    precfinal = precinicial * 0.95;

    printf("Com o desconto de 5 por cento, o produto passou a custar R$ %.2f", precfinal);

}