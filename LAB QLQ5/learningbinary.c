#include <stdio.h>

int main(){
    int T = 3;
    scanf("%d", &T);
    long int X;
    int P;
    int binary;
    for(int i = 0; i < T; i++){
        scanf("%ld %d", &X, &P);
        binary = (X >> P) % 2 == 1;
        printf("%d\n", binary); 
    }
    return 0;
}