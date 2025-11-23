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

int dfs(int x, int y) {
    if (!canMove(x, y) || visited[x][y] || grid[x][y] == '#') {
        return 0;
    }

    visited[x][y] = true;
    int count = 0;
    if (grid[x][y] == '*') {
        count = 1;
    }

    for (int i = 0; i < 4; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        count += dfs(newX, newY);
    }

    return count;
}

int countFood() {
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
                if (grid[i][j] == 'P') {
                    startX = i;
                    startY = j;
                }
            }
        }

        int foodCount = dfs(startX, startY);
        printf("Case #%d: %d\n", caseNum++, foodCount);
    }
    return 0;
}

int main() {
    countFood();
    return 0;
}
