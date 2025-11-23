#include <stdio.h>

int main(){
    double A, A2, A3;
    double B, B2, B3;
    double C, C2, C3;
    double D, D2, D3;

    scanf("(%lf+%lf)x(%lf-%lf)\n", &A, &B, &C, &D);
    scanf("(%lf+%lf)x(%lf-%lf)\n", &A2, &B2, &C2, &D2);
    scanf("(%lf+%lf)x(%lf-%lf)", &A3, &B3, &C3, &D3);

    printf("%.0lf", (A+B)*(C-D));
    printf(" %.0lf", (A2+B2)*(C2-D2));
    printf(" %.0lf\n", (A3+B3)*(C3-D3));

    return 0;
}