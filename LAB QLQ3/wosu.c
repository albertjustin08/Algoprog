#include <stdio.h>

int main(){
    double N; 
    double point = 0;
    double perviousPoint = 0;

    scanf("%lf", &N);
    for(int i = 1; i <= N; i++){
        point = perviousPoint + 100 + 50 * (i-1);
        perviousPoint = point;

    }
    printf("%.0lf\n", point);

    return 0;

}