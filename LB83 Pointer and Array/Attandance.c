#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int teamCount[N + 1]; 
    for (int i = 0; i <= N; i++) {
        teamCount[i] = 0;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int shirtNumber;
            scanf("%d", &shirtNumber);
            teamCount[shirtNumber]++;
        }
    }
    int incompleteTeams = 0;
    for (int team = 1; team <= N; team++) {
        if (teamCount[team] < N) {
            incompleteTeams++;
        }
    }
    printf("%d\n", incompleteTeams);
    return 0;
}
