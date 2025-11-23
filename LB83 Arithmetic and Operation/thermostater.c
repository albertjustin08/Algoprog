#include <stdio.h>

int main(){
    int T = 3;
    int A1, A2, A3;

    scanf("%d", &T);
    getchar();
    scanf("%d", &A1);
    getchar();
    scanf("%d", &A2);
    getchar();
    scanf("%d", &A3);
    getchar();

    double reamur = 0.8 * A1;
    double farenheit = 1.8 * A1 + 32;
    double kelvin = A1 + 273;

    double reamur2 = 0.8 * A2;
    double farenheit2 = 1.8 * A2 + 32;
    double kelvin2 = A2 + 273;

    double reamur3 = 0.8 * A3;
    double farenheit3 = 1.8 * A3 + 32;
    double kelvin3 = A3 + 273;

    printf("%.2lf %.2lf %.2lf\n", reamur, farenheit, kelvin);
    printf("%.2lf %.2lf %.2lf\n", reamur2, farenheit2, kelvin2);
    printf("%.2lf %.2lf %.2lf\n", reamur3, farenheit3, kelvin3);

    return 0;

}