#include <stdio.h>

int main() {
    double a, b, c, d;
    double a2, b2, c2, d2;
    double a3, b3, c3, d3;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    scanf("%lf %lf %lf %lf", &a2, &b2, &c2, &d2);
    scanf("%lf %lf %lf %lf", &a3, &b3, &c3, &d3);

    double total = (a/1) + (b/2) + (c/3) + (d/4) + (b/2) + (c/3) + (d/4) + (c/3) + (c/3) + (d/4) + (c/3) + (b/2) + (d/4) + (c/3) + (b/2) + (a/1);
    double total2 = (a2/1) + (b2/2) + (c2/3) + (d2/4) + (b2/2) + (c2/3) + (d2/4) + (c2/3) + (c2/3) + (d2/4) + (c2/3) + (b2/2) + (d2/4) + (c2/3) + (b2/2) + (a2/1);
    double total3 = (a3/1) + (b3/2) + (c3/3) + (d3/4) + (b3/2) + (c3/3) + (d3/4) + (c3/3) + (c3/3) + (d3/4) + (c3/3) + (b3/2) + (d3/4) + (c3/3) + (b3/2) + (a3/1);

    printf("%.2lf\n", total);
    printf("%.2lf\n", total2);
    printf("%.2lf\n", total3);

    return 0;
}