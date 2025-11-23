#include <stdio.h>

int calculateTotalTrees(int days, int trees[]) {
    if (days == 0) {
        return 0;
    }
    
    return trees[days-1] + calculateTotalTrees(days-1, trees);
}

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);
        
        int trees[N];
        for (int j = 0; j < N; j++) {
            scanf("%d", &trees[j]);
        }
        
        int totalTrees = calculateTotalTrees(N, trees);
        printf("Case #%d: %d\n", i, totalTrees);
    }
    
    return 0;
}