#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    int X;
    int N;
    int depan, belakang;

    for(int i = 1; i <= T; i++){
        scanf("%d %d", &N, &X);
        printf("Case #%d: ", i);
        depan = X / 2;
        belakang = (N / 2) - (X / 2);
        if(depan > belakang){
            printf("%d\n", belakang);
        }
        else{
            printf("%d\n", depan);
        }
    }
    return 0;
}