#include <stdio.h>

int main(){
    double B, H;
    double L, luas;
    scanf("%lf %lf %lf", &L, &B, &H);
    luas = (B*H) + (3*B*L);
    printf("%.3lf\n", luas);

    return 0;
}