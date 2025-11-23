#include <stdio.h>

int main(){
    int n, a[1000];
    int finalres = 0;

    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int j = 0; j < n; j++){
        int temp = a[j];
        int temp2 = 0;
        for(int k = 0; k < n; k++){
            if(a[k] == a[j]){
                temp2++;
            }
        }
            if(temp2 > finalres){
                finalres = temp2;
        }
    }

    printf("%d\n", finalres);
    return 0;
}