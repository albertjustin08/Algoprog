#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int n, k, palingKiri, palingKanan;
        char tangga[10005];
        scanf("%d %d", &n, &k); getchar();
        scanf("%s", tangga);

        palingKiri = palingKanan = -1;
        for(int j = 0; j < n; j++){
            if(tangga[j] == '1'){
                palingKiri = j;
                break;
            }
        }

        for(int j = n - 1; j >= 0; j--){
            if(tangga[j] == '1'){
                palingKanan = j;
                break;
            }
        }

        if((palingKiri == palingKanan) && k >= n){
            printf("Case #%d: Alive\n", i+1);
        }

        else if((palingKiri != palingKanan) && ((palingKiri+1) <= k) && ((n-palingKanan) <= k)){
            printf("Case #%d: Alive\n", i+1);
        }
        else{
            printf("Case #%d: Dead\n", i+1);
        }  
    }
    return 0;
}