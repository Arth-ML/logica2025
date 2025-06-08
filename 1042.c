#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3;


    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    for(int i = 0; i < 3; i++){
        printf("%d", n1);
        printf("%d", n2);
        printf("%d", n3);
    }

    return 0;
}