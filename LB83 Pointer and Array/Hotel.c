#include <stdio.h>

int main() {
    int N;
    int ans = 0;
    scanf("%d", &N);
    
    int room[N + 5];
    for(int i = 0; i < N; i++) {
        scanf("%d", &room[i]); 
    }

    int visited[N + 5];
    for (int i = 0; i < N; i++) {
        visited[i] = 0; 
    }

    for(int i = 0; i < N; i++) {
        if (visited[i] == 0) {
            ans++;
            visited[i] = 1; 
            for (int j = i + 1; j < N; j++) {
                if (room[j] == room[i]) {
                    visited[j] = 1;
                }
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}
