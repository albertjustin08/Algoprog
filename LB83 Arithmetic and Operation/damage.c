#include <stdio.h>

int main(){
    int P1;
    int M;
    int P2;
    double damage;

    scanf("%d %d %d", &P1, &M, &P2);
    damage = P1*0.2 + M*0.3 + P2*0.5;
    printf("%.2lf\n", damage);

    return 0;
}