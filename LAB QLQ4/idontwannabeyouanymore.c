#include <stdio.h>

int main(){
    int T;
    int lenght;

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d", &lenght);
        char N[lenght+1];
        getchar();
        scanf("%[^\n]", N);
        getchar();
        printf("Case #%d: ", i+1);
        for(int j = 0; j < lenght; j++){
            if (N[j] >= 'a' && N[j] <= 'z'){
                printf("%c", N[j]);
            }
            
        }
        printf("\n");
    }
    return 0;
}