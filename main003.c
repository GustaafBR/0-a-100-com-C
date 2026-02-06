#include <stdio.h>

int main(){
    char nome[15];
    int salario;
    //-------------------------------------------------------------------------------------------------
    printf("Nome do(da) funcionário(a): ");
    scanf("%s", &nome);
    printf("\nSalário do(da) funcionário(a) em R$: ");
    scanf("%d", &salario);
    printf("\nO(A) funcinário(a) %s recebe um salário de R$ %d\n", nome, salario);
}