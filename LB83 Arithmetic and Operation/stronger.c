#include <stdio.h>

int main(){
    double N; 
    double damage = 0;
    double perviousDamage = 0;

    scanf("%lf", &N);
    for(int i = 1; i <= N; i++){
        damage = perviousDamage + 100 + 50 * (i-1);
        perviousDamage = damage;

    }
    printf("%.0lf\n", damage);

    return 0;

}