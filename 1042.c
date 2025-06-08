#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2,n3;

    scanf("%d %d %d", &n1, &n2, &n3);

   for(int i = 0; i < 3; i++){
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d", n3);
   }


    return 0;
}