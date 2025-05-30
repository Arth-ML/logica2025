#include <stdio.h>

int main(){
    char nome[20];
    double salario, vendas;
    double comissao;
    double totalReceber;

    scanf("%s", nome);
    scanf("%,2f", &salario);
    scanf("%lf", &vendas);

    
    totalReceber = salario + (vendas * 0.15);
    

    printf("TOTAL = R$%.2f\n", totalReceber);
    return 0;
}