#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        char S[1000];
        scanf("%s", S);
        printf("Case %d: ", t);
        for (int i = 0; S[i] != '\0'; i++) {
            printf("%d", (int)S[i]);
            if (S[i + 1] != '\0') {
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}
