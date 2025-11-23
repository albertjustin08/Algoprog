#include <stdio.h>
#include <stdbool.h>

int N, M;
char grid[100][100];
bool visited[100][100];

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool canMove(int x, int y) {
    return x >= 0 && x < N && y >= 0 && y < M && grid[x][y] != '#';
}

void dfs(int x, int y, int *count) {
    if (!canMove(x, y) || visited[x][y] || grid[x][y] == '#') {
        return;
    }

    visited[x][y] = true;

    if (grid[x][y] == '.') {
        (*count)++;
    }

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        dfs(newX, newY, count);
    }
}

int countFloors() {
    int caseNum = 1;
    int T;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &N, &M);
        for (int i = 0; i < N; i++) {
            scanf("%s", grid[i]);
        }

        int startX, startY;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                visited[i][j] = false;
                if (grid[i][j] == 'S') {
                    startX = i;
                    startY = j;
                }
            }
        }

        int floorCount = 0;
        dfs(startX, startY, &floorCount);
        printf("Case #%d: %d\n", caseNum++, floorCount);
    }
    return 0;
}

int main() {
    countFloors();
    return 0;
}
