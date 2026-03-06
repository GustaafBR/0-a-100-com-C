#include <stdio.h>

int main(){
    // Variáveis
    float comp; // maior valor - Comprimento
    float larg; //menor valor - Largura
    float metquad; //metrosquadrados da parede, resultado de comp * larg
    float litros; //litros que vão ser necessários

    //Escopo
    printf("Digite o comprimeto da parede, em metros (maior valor): ");
    scanf("%f", &comp);
    //------
    printf("\nDigite a largura da parede, em metros (menor valor): ");
    scanf("%f", &larg);
    //-----
    /*
    No exercício, é dito que:

    - Cada litro de tinta pinta uma área de 2 metros quadrados

    Ou seja

    - 1 litro == 2 m²

    Então

    - Qual é a área a ser pintada, em m² ? float metquad = float comp * float larg;
    - Qual é a quantidade de tinta, em litros, necessária para pintar a parede?
        - Se 1 litro equivale a 2 metros quadrados, quantos y litros equivalem a x metros quadrados?
        - 1 * x == 2 * y

        - Mas como x vai ser calculado antes, faz sentido passar o 2 dividindo para o outro lado. Dessa forma, seria algo do tipo:
        - y = x / 2
       
    Assim    
    */
   metquad = comp * larg; // metros quadrados
   litros = metquad / 2;
    //----
    printf("\nDado os dados (comprimento: %.2f metros; largura: %.2f metros; logo a parede tem %.2f m²), serão necessários %.2f litros de tinta para pintar a parede", comp, larg, metquad, litros );

}