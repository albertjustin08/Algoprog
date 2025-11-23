#include <stdio.h>

int main(){
    double A;
    double B;

    scanf("%lf %lf", &A, &B);
    getchar();

    printf("%.4lf%%\n", (B/A) * 100);

    return 0;
    
}