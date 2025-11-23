#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);
    int row[101][101] = {0};
    int col[101][101] = {0}; 

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            int value;
            scanf("%d", &value);

            if (row[i][value] || col[j][value]) {
                printf("Nay\n");
                return 0;
            }

            row[i][value] = 1; 
            col[j][value] = 1; 
        }
    }

    printf("Yay\n");
    return 0;
}