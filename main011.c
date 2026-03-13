#include <stdio.h>
#include <math.h> // necessária para fazer a exponenciação do b²

int main(){
    //Variáveis
    int numA; // recebe o valor de ax²
    int numB; // recebe o valor de bx - essa é a base do pow
    int expnumB = 2; // valor do expoente para o pow 
    int numBelev; // valor de b elevado ao quadrado
    int numC; // recebe o valor de c
    float valDelta; // recebe o valor de Delta

    //Escopo
    printf("Digite o valor de a (o do ax² da equação) : ");
    scanf("%d", &numA);
    //-------------------------------
    printf("\nDigite o valor de b (o do bx da equação) : ");
    scanf("%d", &numB);
    //-------------------------------
    printf("\nDigite o valor de c (o do c da equação) : ");
    scanf("%d", &numC);
    //-------------------------------
    /*
    O que o exercício pede?

    - Desenvolva uma lógica que leia os valores de A, B e C de uma equação do segundo grau e mostre o valor de Delta

    O que é uma equação do segundo grau?

    - ax² + bx + c = 0

    - Então primeiro peça o valor de a, b e c para o usuário

    Depois? "mostre o valor de Delta"
    Mas como calcular o valor de Delta de uma equação do segundo Grau ?

    - △ = b² - 4 * a * c

    Como elevar um número em C?

    - Com a adição da biblioteca math.h, é possível usar o comando pow(base, expoente), onde por meio de duas variáveis, uma base e um expoente, é possível elevar o valor da variavel da base utilizando o valor da variável do expoente como referência

    assim:

    resultado = pow(base, expoente)
    numBelev = pow(numB, expnumB)

    Como organizar isso no código ?

    - valDelta = numBelev - (4 * numA * numC);

    e no final, mostre o valor de Delta com base no valores de a, b e c oferecidos pelo usuário

    Assim...
    */

   numBelev = pow(numB, expnumB); // valor de b² feito separado

   valDelta = numBelev - (4 * numA * numC); // cálculo de Delta

   //exibindo o resultado:
   printf("\nDado os valores de A = %d, B = %d e C = %d, o valor de Delta dessa equação do segundo grau é %.2f\n", numA, numB, numC, valDelta);
}