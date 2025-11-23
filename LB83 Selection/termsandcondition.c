#include <stdio.h>

int main(){
    int T;
    double A, B, C;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
    scanf("%lf %lf %lf", &A, &B ,&C);
    getchar();
        if((A*B/100)>= C){
            printf("Case #%d: %.0lf\n", i, C);
        }
        else{   
            printf("Case #%d: %.0lf\n", i, A * B / 100);
        }
    }
    return 0;
}