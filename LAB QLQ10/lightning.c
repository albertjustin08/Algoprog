#include <stdio.h>

int countLightning(int N, int A, int B, char* sound) {
    int count = 0;
    int duration = 0;
    
    for (int i = 0; i < N; i++) {
        if (sound[i] == '1') {
            duration++;
        } else {
            if (duration >= A && duration <= B) {
                count++;
            }
            duration = 0;
        }
    }
    
    if (duration >= A && duration <= B) {
        count++;
    }
    
    return count;
}

int main() {
    FILE *file;
    file = fopen("testdata.in", "r");

    int T;
    fscanf(file, "%d", &T);

    for (int i = 1; i <= T; i++) {
        int N, A, B;
        fscanf(file ,"%d %d %d", &N, &A, &B);
        
        char sound[N+1];
        fscanf(file, "%s", sound);
        
        int lightningCount = countLightning(N, A, B, sound);
        
        printf("Case #%d: %d\n", i, lightningCount);
    }
    fclose(file);
    return 0;
}
