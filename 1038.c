#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, opcao2;
    double total;
    scanf("%d", &opcao);
    scanf("%d", &opcao2);


    switch(opcao){
        case 1:
            total = 4.00 * opcao2;
            printf("Total: R$ %.2lf", total);
            break;
        case 2:
            total = 4.50 * opcao2;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 3:
            total = 5.00 * opcao2;
            printf("Total:  R$ %.2lf\n", total);
            break;
        case 4:
            total = 2.00 * opcao2;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 5:
            total = 1.50 * opcao2;
            printf("Total: R$ %.2lf\n", total);
            break;
    }
    
    
    
    return 0;
}