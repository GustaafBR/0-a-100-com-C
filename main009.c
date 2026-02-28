#include <stdio.h>

int main(){
    // Variáveis
    float valororiginal; // tambem chamado de V.O. nesse caso
    float valorconvertido; // tambem chamado de V.C. nesse caso

    // Escopo
    printf("Digite quantos reais você tem em sua carteira: ");
    scanf("%f", &valororiginal);
    //--------------------------------------------------------
    /*
    - Seguindo a lógica de que:

    1 dólar é igual a R$ 5,19 (Conversão datada de 10/02/2026)

    - Então podemos dizer que:

    Dólar | Reais
    1     | 5,19
    V.C.  | V.O.

    - Logo

    V.C. * 5,19 = V.O.

    V.C. = V.O. / 5.19

    - Seguindo abaixo como fica:
    */
   valorconvertido = valororiginal / 5.19;
    //--------------------------------------------------------
    printf("\nDe acordo com os dados oferecidos, com R$ %.2f, você pode comprar USD %.2f ! ", valororiginal, valorconvertido);

}