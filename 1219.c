#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    const double PI = acos(-1.0);
    
    while (scanf("%d %d %d", &a, &b, &c) == 3) {
        double s = (a + b + c) / 2.0;
        double area_triangle = sqrt(s * (s - a) * (s - b) * (s - c));
        
        double r = area_triangle / s;
        double R = (a * b * c) / (4.0 * area_triangle);
        
        double area_incircle = PI * r * r;        
        double area_circumcircle = PI * R * R;     
        double area_violets = area_triangle - area_incircle;
        double area_sunflowers = area_circumcircle - area_triangle;

        printf("%.4lf %.4lf %.4lf\n", area_sunflowers, area_violets, area_incircle);
    }

    return 0;
}
