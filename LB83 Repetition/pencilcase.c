#include <stdio.h>

int main(){
    double T;
    double R, H;
    double luas;
    scanf("%lf", &T);
    for(int i = 1; i <= T; i++){
        scanf("%lf %lf", &R, &H);
        luas = 2 * 3.14 * R * (R + H);
        printf("Case #%d: %.2lf\n", i, luas);
    }
    return 0;
}