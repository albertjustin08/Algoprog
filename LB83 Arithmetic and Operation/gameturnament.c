#include <stdio.h>
#include <math.h>

int main(){
    double N = 2; 
    double pangkat;
    double posibble;

    scanf("%lf",&pangkat);
    getchar();

    posibble = pow(N, pangkat);

    printf("%.0lf\n", posibble - 1);

    return 0;
}