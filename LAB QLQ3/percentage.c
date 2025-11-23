#include <stdio.h>

int main(){
    int T = 3;
    double P, P2, P3; 
    double N, N2, N3;

    scanf("%d", &T);
    getchar();
    scanf("%lf %lf", &P, &N);
    getchar();
    scanf("%lf %lf", &P2, &N2);
    getchar();
    scanf("%lf %lf", &P3, &N3);
    getchar();

    double hasil1 = (P/100) * N;
    double hasil2 = (P2/100) * N2;
    double hasil3 = (P3/100) * N3;

    printf("%.2lf\n", hasil1);
    printf("%.2lf\n", hasil2);
    printf("%.2lf\n", hasil3);

    return 0;

}