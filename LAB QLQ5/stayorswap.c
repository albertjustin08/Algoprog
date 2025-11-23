#include <stdio.h>

int main(){
    int T;
    int N, K, M;
    scanf("%d", &T);
        
    for(int i = 1; i <= T; i++){
        scanf("%d %d %d", &N , &K, &M);

        int Xi[N];
        for(int j = 0; j < N; j++){
            scanf("%d", &Xi[j]);

            if(Xi[j] > M && Xi[j] <= K){
                M = Xi[j];
            }
        }
        printf("Case #%d: ", i);
        printf("%d\n", M);
    }
    return 0;
}