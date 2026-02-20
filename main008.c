#include <stdio.h>

int main(){
    // Variáveis
    float medMetro;
    // Variáveis de escala maior que o metro
    float medDam; // Decâmetro
    float medHm; // Hectômetro
    float medKm; // Quilômetro
    // Variáveis de escala menor que o metro
    float medDm; // Decímetro
    float medCm; // Centímetro
    float medMm; // Milímetro


    //Escopo
    printf("Digite uma medida, em metros: ");
    scanf("%f", &medMetro);
    //------------------------------------------
    // Calculando escalas menores que o metro
    // Decímetro
    medDm = medMetro*10;
    // Centímetro
    medCm = medMetro*100;
    // Milímetro
    medMm = medMetro*1000;
    //------------------------------------------
    // Calculando escalas maiores que o metro
    // Decâmetro
    medDam = medMetro/10;
    // Hectômetro
    medHm = medMetro/100;
    // Quilômetro
    medKm = medMetro/1000;
    //------------------------------------------
    // Resultado final na tela
    printf("\n%.5f metros equivale a:\n\n", medMetro);
    // Mostrando escalas menores que o metro
    printf("\n%.5f DM (Decímetro)", medDm);
    printf("\n%.5f CM (Centímetro)", medCm);
    printf("\n%.5f MM (Milímetro)\n", medMm);

    // Mostrando escalas maiores que o metro
    printf("\n%.5f DAM (Decâmetro)", medDam);
    printf("\n%.5f HM (Hectômetro)", medHm);
    printf("\n%.5f KM (Quilômetro)", medKm);

}