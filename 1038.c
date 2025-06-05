#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, opcao2, total;

    printf("\n1 - cachorro Quente\n2 - X-salada\n3 - X-Bacon\n4 - Torrada Simples\n5 - Refrigerente\n");
    printf("Pedido: ");
    printf("\nQuantidade: ");
    scanf("%d", &opcao);
    scanf("%d", &opcao2);


    switch(opcao){
        case 1:
            total = 4.00 * opcao2;
            printf("TOTAL: R$ %d", total);
    }
    
    return 0;
}