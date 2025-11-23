#include <stdio.h>

int main(){
    int T;
    double K, N, M;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
    scanf("%lf %lf %lf", &K, &N, &M);
        if(K <= N + M){
            printf("Case #%d: yes\n", i+1);
        }
        else{   
            printf("Case #%d: no\n", i+1);
        }
    }
    return 0;
}