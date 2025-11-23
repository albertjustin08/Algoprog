#include <stdio.h>

int main(){
    int T;
    int N, M;
    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
    scanf("%d %d", &N, &M);
        if(N <= 1){
            printf("Case #%d: Need more frogs\n", i);
        }
        else{   
            printf("Case #%d: Party time!\n", i);
        }
    }
    return 0;
}