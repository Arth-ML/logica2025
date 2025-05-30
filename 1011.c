#include <stdio.h>
#include <math.h>

int main(){
    double raio;
    double pi = 3.14159;
    double volume;

    scanf("%lf", &raio);

    volume = (4/3.0)*pi*pow(raio,3);

    printf("VOLUME = %.3f\n", volume);
    return 0;
}