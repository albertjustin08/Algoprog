#include <stdio.h>

int main() {
    int N;
    char string[101];
    char hasil1;
    char hasil2;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &N);
        for(int j = 0; j < N; j++){
            scanf(" %c", &string[j]); 

            hasil1 = string[0];
            hasil2 = string[N - 1];
        }
        
    printf("%c%c\n", hasil2, hasil1);
    }
    return 0;
}
