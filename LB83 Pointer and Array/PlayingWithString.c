#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        char str[1001];
        scanf("%s", str);
        getchar();

        int M;
        scanf("%d", &M);
        getchar();

        for (int i = 0; i < M; i++) {
            char A, B;
            scanf("%c %c", &A, &B);
            getchar();

            for (int j = 0; str[j] != '\0'; j++) {
                if (str[j] == A) {
                    str[j] = B;
                }
            }
        }
        printf("Case #%d: %s\n", t, str);
    }
    return 0;
}
