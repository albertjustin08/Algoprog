#include <stdio.h>

int main(){
    int T;
    int U1;
    int U2;
    double score;

    scanf("%d %d %d", &T, &U1, &U2);
    score = T*0.2 + U1*0.3 + U2*0.5;
    printf("%.2lf\n", score);

    return 0;
}