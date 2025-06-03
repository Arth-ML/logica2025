#include <stdio.h>
#include <stdlib.h>



int main(){
    double X;
    double Y;
    
    scanf("%lf", &X);
    scanf("%lf", &Y);

    double consumo = X / Y;

    printf("%.3lf km/l\n", consumo);

    return 0;
}